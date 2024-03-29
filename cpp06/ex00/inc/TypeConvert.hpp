/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConvert.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:42:07 by shogura           #+#    #+#             */
/*   Updated: 2022/08/26 22:07:34 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(TYPECONVERT_HPP)
#define TYPECONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cfloat>

class TypeConvert
{
public:
	TypeConvert();
	TypeConvert(std::string literal);
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
	char minus_;
	std::string Finfo_;
	std::string Dinfo_;
};

#endif // TYPECONVERT_HPP
