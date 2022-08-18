/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:53:26 by shogura           #+#    #+#             */
/*   Updated: 2022/08/18 19:58:36 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(WRONGCAT_HPP)
#define WRONGCAT_HPP

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat&);
	WrongCat(std::string);
	~WrongCat();

	WrongCat &operator=(const WrongCat&);
};

#endif // WRONGCAT_HPP
