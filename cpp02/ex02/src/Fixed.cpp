/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/04 23:30:03 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _val(0)
{
}

Fixed::Fixed(const Fixed &cp)
{
	*this = cp;
}

Fixed::Fixed(int val)
{
	this->_val = val << _bits;
}

Fixed::Fixed(float val)
{
	this->_val = roundf(val * (1 << _bits));
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	this->_val = cp._val;
	return *this;
}

bool Fixed::operator>(const Fixed &cp)
{
	return this->_val > cp._val;
}

bool Fixed::operator<(const Fixed &cp)
{
	return this->_val < cp._val;
}

bool Fixed::operator>=(const Fixed &cp)
{
	return this->_val >= cp._val;
}

bool Fixed::operator<=(const Fixed &cp)
{
	return this->_val <= cp._val;
}

bool Fixed::operator==(const Fixed &cp)
{
	return this->_val == cp._val;
}

bool Fixed::operator!=(const Fixed &cp)
{
	return this->_val != cp._val;
}

Fixed Fixed::operator+(const Fixed &cp)
{
	Fixed ret;

	ret._val = this->_val + cp._val;
	return ret;
}

Fixed Fixed::operator-(const Fixed &cp)
{
	Fixed ret;

	ret._val = this->_val - cp._val;
	return ret;
}

Fixed Fixed::operator*(const Fixed &cp)
{
	Fixed ret;

	ret._val = this->_val * cp._val;
	return ret;
}

Fixed Fixed::operator/(const Fixed &cp)
{
	Fixed ret;

	ret._val = this->_val / cp._val;
	return ret;
}

Fixed& Fixed::operator++(void)
{
	this->_val++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);

	ret._val++;
	return ret;
}

Fixed& Fixed::operator--(void)
{
	this->_val--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);

	ret._val--;
	return ret;
}

static Fixed& min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	else
		return a;
}

static const Fixed& min(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return b;
	else
		return a;
}

static Fixed& max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

static const Fixed& max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

std::ostream &operator<<(std::ostream& stream, const Fixed& fixed_class)
{
	stream << fixed_class.toFloat();

	return stream;
}

float Fixed::toFloat(void) const
{
	return (float)_val / (1 << _bits);
}
