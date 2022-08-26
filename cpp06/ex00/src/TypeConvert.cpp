/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:41:45 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 21:26:10 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <TypeConvert.hpp>

TypeConvert::TypeConvert()
{
}

TypeConvert::TypeConvert(std::string literal) : literal_(literal)
{
}

TypeConvert::TypeConvert(const TypeConvert &other)
{
	*this = other;
}

TypeConvert::~TypeConvert()
{
}

TypeConvert &TypeConvert::operator=(const TypeConvert &other)
{
	(void)other;
	return *this;
}

bool TypeConvert::printSpecial(void)
{
	if (literal_ == "nan" || literal_ == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return true;
	}
	else if (literal_ == "+inf" || literal_ == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return true;
	}
	else if (literal_ == "-inf" || literal_ == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return true;
	}
	return false;
}

bool TypeConvert::checkChar(void)
{
	if (literal_.length() != 1)
		return false;
	if (isprint(literal_[0]) && !isdigit(literal_[0]))
		return true;
	return false;
}

bool TypeConvert::checkInt(void)
{
	if (literal_[0] == '-')
		literal_.erase(0, 1);
	for (size_t i = 0; i < literal_.length(); i++)
	{
		if (!isdigit(literal_[i]))
			return false;
	}
	return true;
}

bool TypeConvert::checkFloat(void)
{
	int i = 0;

	if (literal_[i] == '-')
		i++;
	if (!isdigit(literal_[i]))
		return false;
	while (isdigit(literal_[i]))
		i++;
	if (literal_[i++] != '.')
		return false;
	if (!isdigit(literal_[i]))
		return false;
	while (isdigit(literal_[i]))
		i++;
	if (literal_[i++] != 'f')
		return false;
	if (literal_[i])
		return false;
	return true;
}

void TypeConvert::convertChar(void)
{
	char ch = literal_[0];
	int i = static_cast<int>(ch);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	std::cout << "char: '" << ch << "'" << std::endl;
	std::cout << "Int: '" << i << std::endl;
	std::cout << "float: '" << f << ".0f" << std::endl;
	std::cout << "double: '" << d << ".0" << std::endl;
}

void TypeConvert::convertInt(void)
{
	double d = strtod(literal_.c_str(), NULL);
	int i = static_cast<int>(d);
	char ch = static_cast<char>(d);
	float f = static_cast<float>(d);

	if (isprint(ch) && d < 256 && d > 0)
		std::cout << "char: '" << ch << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	if (d > INT_MAX && d < INT_MIN)
	{
		std::cout << "int: " << i << std::endl;
		std::cout << "int: " << f << std::endl;
		std::cout << "int: " << d << std::endl;
	}
	else
	{
		std::cout << "int: It's overflow" << std::endl;
		std::cout << "float: It's overflow" << std::endl;
		std::cout << "double: It's overflow" << std::endl;
	}

}

void TypeConvert::converter(void)
{
	if (printSpecial() == false)
	{
		if (checkChar())
			convertChar();
		else if(checkInt())
			convertInt();
		else if (checkFloat())
			convertFloat();
		else if (checkDouble())
			convertDouble();
	}
	return;
}
