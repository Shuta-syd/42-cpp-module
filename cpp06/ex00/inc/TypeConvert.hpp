/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:42:07 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 20:11:42 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(TYPECONVERT_HPP)
#define TYPECONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class TypeConvert
{
public:
	TypeConvert();
	TypeConvert(const char *);
	TypeConvert(const TypeConvert &);
	~TypeConvert();

	TypeConvert &operator=(const TypeConvert &);

	void converter(void);

private:
	bool printSpecial(void);

	bool checkChar(void);
	bool checkInt(void);
	bool checkFloat(void);
	bool checkDouble(void);

	void convertChar(void);
	void convertInt(void);
	void convertFloat(void);
	void convertDouble(void);

	std::string literal_;
};

#endif // TYPECONVERT_HPP
