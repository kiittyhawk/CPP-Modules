#include "../includes/Convert.hpp"

Convert::Convert(std::string num) : _value(num) {}

Convert::Convert(Convert const &convert)
{
    *this = convert;
}

Convert::~Convert(void) {}

Convert &Convert::operator= (const Convert &convert)
{
    if (this != &convert)
        _value = convert._value;
    return (*this);
}

std::string Convert::getNum(void) const
{
    return (_value);
}

bool    Convert::checkType(void) const
{
    return(isnan(toFloat()) || isinf(toFloat()));
}

int Convert::toInt(void) const
{
    return (static_cast<int>(toFloat()));
}

char Convert::toChar(void) const
{
    return (static_cast<char>(toFloat()));
}

float Convert::toFloat(void) const
{
    return (atof(_value.c_str()));
}

double Convert::toDouble(void) const
{
    return (static_cast<double>(toFloat()));
}

std::ostream &operator<< (std::ostream &ostream, Convert const &convert)
{
	if (convert.checkType() || convert.toFloat() < std::numeric_limits<char>::min() || convert.toFloat() > std::numeric_limits<char>::max())
		ostream << "char:\timpossible" << std::endl;
    else if (convert.toChar() < 32 || convert.toChar() > 126)
		ostream << "char:\tNon displayable" << std::endl;
	else
		ostream << "char:\t\'" << convert.toChar() << "\'" << std::endl;
    if (convert.checkType() || convert.toFloat() < std::numeric_limits<int>::min() || convert.toFloat() > std::numeric_limits<int>::max())
        ostream << "int:\timpossible" << std::endl;
    else
        ostream << "int:\t" << convert.toInt() << std::endl;
    if (convert.toFloat() - convert.toInt() == 0)
    {
        ostream << "float:\t" << convert.toFloat() << ".0f" << std::endl;
        ostream << "double:\t" << convert.toDouble() << ".0" << std::endl;
    }
    else
    {
        ostream << "float:\t" << convert.toFloat() << "f" << std::endl;
        ostream << "double:\t" << convert.toDouble() << std::endl;
    }
    return (ostream);
}
