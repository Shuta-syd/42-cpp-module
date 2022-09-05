/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:46:00 by shogura           #+#    #+#             */
/*   Updated: 2022/09/05 19:34:57 by shogura          ###   ########.fr       */
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

void Span::addNumber(int n){
	if (nm_.size() >= size_)
		throw(std::length_error("[Exception] size limit reached"));
	nm_.push_back(n);
}

void Span::addNumber(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (nm_.size() >= size_)
			throw(std::length_error("[Exception] size limit reached"));
		nm_.push_back(arr[i]);
	}
}

int Span::shortestSpan(void) {
	int shortSpan = INT_MAX;

	if (nm_.size() <= 1)
		throw(std::length_error("[Exception] not enough size to run this func"));
	std::sort(nm_.begin(), nm_.end());
	for (size_t i = 0; i < nm_.size() - 1; i++)
	{
		int diff = nm_[i + 1] - nm_[i];
		if (diff < shortSpan && diff > 0)
			shortSpan = diff;
	}
	return (shortSpan);
}

int Span::longestSpan(void) {
	if (nm_.size() <= 1)
		throw(std::length_error("[Exception] not enough size to run this func"));
	std::sort(nm_.begin(), nm_.end());
	return (nm_[nm_.size() - 1] - nm_[0]);
}
