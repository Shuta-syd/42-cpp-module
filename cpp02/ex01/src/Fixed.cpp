/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/04 20:47:48 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp) : _val(cp._val)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::Fixed(int val) : _val(val)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float val) : _val(0)
{
	this->_val = (int)val;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = cp.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream& stream, const Fixed& fixed_class)
{
	stream << fixed_class.toFloat();

	return stream;
}

int Fixed::getRawBits(void) const
{
	return this->_val;
}

void Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->_val;
}

int Fixed::toInt(void) const
{
	return _val;
}
