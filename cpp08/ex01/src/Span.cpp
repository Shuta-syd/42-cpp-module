/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:46:00 by shogura           #+#    #+#             */
/*   Updated: 2022/09/07 20:30:14 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span() : size_(0)
{
}

Span::Span(unsigned int size) : size_(size)
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
	size_ = other.size_;
	nm_ = other.nm_;
	return *this;
}

void Span::addNumber(long n){
	if (nm_.size() >= size_)
		throw(std::length_error("[Exception] size limit reached"));
	nm_.push_back(n);
}

void Span::addNumber(std::vector<int> &arr)
{
	for (unsigned long i = 0; i < arr.size(); i++)
	{
		if (nm_.size() >= size_)
			throw(std::length_error("[Exception] size limit reached"));
		nm_.push_back(arr.at(i));
	}
}

long Span::shortestSpan(void) {
	long shortSpan = LONG_MAX;

	if (nm_.size() <= 1)
		throw(std::length_error("[Exception] not enough size to run this func"));
	std::sort(nm_.begin(), nm_.end());
	for (unsigned long i = 0; i < nm_.size() - 1; i++)
	{
		long diff = nm_[i + 1] - nm_[i];
		if (diff < shortSpan && diff >= 0)
			shortSpan = diff;
	}
	return (shortSpan);
}

long Span::longestSpan(void) {
	if (nm_.size() <= 1)
		throw(std::length_error("[Exception] not enough size to run this func"));
	std::sort(nm_.begin(), nm_.end());
	return (nm_[nm_.size() - 1] - nm_[0]);
}
