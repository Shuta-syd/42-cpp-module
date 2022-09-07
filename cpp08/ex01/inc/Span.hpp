/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:45:27 by shogura           #+#    #+#             */
/*   Updated: 2022/09/07 20:31:25 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SPAN_HPP)
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int nm);
	~Span();

	Span(const Span &);
	Span &operator=(const Span &);

	void addNumber(long);
	void addNumber(std::vector<int> &);
	long shortestSpan();
	long longestSpan();

private:
	unsigned int size_;
	std::vector<long> nm_;
};

#endif // SPAN_HPP
