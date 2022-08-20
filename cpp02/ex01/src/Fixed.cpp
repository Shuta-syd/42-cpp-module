/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 20:36:55 by shogura           #+#    #+#             */
/*   Updated: 2022/08/20 20:51:48 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

const int Fixed::bits_ = 8;

Fixed::Fixed(void) : val_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp) : val_(cp.val_)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->val_ = val << bits_;
}

Fixed::Fixed(float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->val_ = roundf(val * (1 << bits_));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &cp)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->val_ = cp.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream& stream, const Fixed& fixed_class)
{
	stream << fixed_class.toFloat();

	return stream;
}

int Fixed::getRawBits(void) const
{
	return this->val_;
}

void Fixed::setRawBits(int const raw)
{
	this->val_ = raw;
}

float Fixed::toFloat(void) const
{
	return (float)val_ / (1 << bits_);
}

int Fixed::toInt(void) const
{
	return (int)val_ / (1 << bits_);
}
