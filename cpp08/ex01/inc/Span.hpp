/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:45:27 by shogura           #+#    #+#             */
/*   Updated: 2022/08/30 17:09:30 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(SPAN_HPP)
#define SPAN_HPP

class Span
{
public:
	Span();
	Span(unsigned int nm);
	~Span();

	Span(const Span &);
	Span &operator=(const Span &);

private:
	unsigned int nm_;
};

#endif // SPAN_HPP
