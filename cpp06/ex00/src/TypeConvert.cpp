/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:41:45 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 20:10:17 by shogura          ###   ########.fr       */
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
