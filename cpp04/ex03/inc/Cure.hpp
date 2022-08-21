/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:21:16 by shogura           #+#    #+#             */
/*   Updated: 2022/08/20 22:23:06 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(CURE_HPP)
#define CURE_HPP

class Cure
{
private:

public:
	Cure();
	~Cure();

	Cure *clone(const Cure &);
};

#endif // CURE_HPP
