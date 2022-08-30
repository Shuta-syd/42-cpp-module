/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:46:00 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 17:13:06 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : nm_(0)
{
}

Span::Span(unsigned int nm) : nm_(nm)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &other){
	this->nm_ = other.nm_;
	return *this;
}
