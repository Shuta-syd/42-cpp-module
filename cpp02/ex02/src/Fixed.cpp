/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/04 22:41:04 by shogura          ###   ########.fr       */
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

}

bool Fixed::operator<(const Fixed &cp)
{

}

bool Fixed::operator>=(const Fixed &cp)
{

}

bool Fixed::operator<=(const Fixed &cp)
{

}

bool Fixed::operator==(const Fixed &cp)
{

}

bool Fixed::operator!=(const Fixed &cp)
{

}

Fixed& Fixed::operator+(const Fixed &cp)
{

}

Fixed& Fixed::operator-(const Fixed &cp)
{

}

Fixed& Fixed::operator*(const Fixed &cp)
{

}

Fixed& Fixed::operator/(const Fixed &cp)
{

}

Fixed& Fixed::operator++(void)
{

}
Fixed Fixed::operator++(int)
{

}

Fixed& Fixed::operator--(void)
{

}
Fixed Fixed::operator--(int )
{

}

static Fixed& min(Fixed& a, Fixed& b)
{

}

static Fixed& min(const Fixed& a, const Fixed& b)
{

}

static Fixed& max(Fixed& a, Fixed& b)
{

}

static Fixed& max(const Fixed& a, const Fixed& b)
{

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
