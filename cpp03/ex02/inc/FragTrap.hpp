/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:24:01 by shogura           #+#    #+#             */
/*   Updated: 2022/08/07 20:08:56 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(FRAGTRAP_HPP)
#define FRAGTRAP_HPP

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string);
	FragTrap(const FragTrap &);
	~FragTrap();

	FragTrap &operator=(const FragTrap &);

	void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP
