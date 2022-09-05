/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:45:27 by shogura           #+#    #+#             */
/*   Updated: 2022/09/05 19:32:04 by shogura          ###   ########.fr       */
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

	void addNumber(int);
	void addNumber(int *, int);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int size_;
	std::vector<int> nm_;
};

#endif // SPAN_HPP
