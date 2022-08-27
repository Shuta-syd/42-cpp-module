/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 22:29:10 by shogura           #+#    #+#             */
/*   Updated: 2022/08/27 18:13:05 by shogura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

typedef struct s_data
{
	int x_;
	int y_;
} Data;

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data d;
	Data *ret;
	uintptr_t i;

	d.x_ = 4;
	d.y_ = 2;
	i = serialize(&d);
	std::cout << i << std::endl;
	ret = deserialize(i);
	std::cout << ret << std::endl;
	if (i == serialize(ret))
		std::cout << "TRUE" << std::endl;
	return 0;
}
