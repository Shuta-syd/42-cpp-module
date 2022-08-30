/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:45:27 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 18:30:37 by shogura          ###   ########.fr       */
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
	int shortestSpan();
	int longestSpan();

private:
	unsigned int size_;
	std::vector<int> nm_;
};

#endif // SPAN_HPP
