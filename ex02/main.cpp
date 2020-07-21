/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:31:10 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:58:44 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <stdlib.h>
#include <time.h>

std::string		get_rand_name(void)
{
	int		size;
	std::string		names[10];

	size = 0;
	names[size++] = "Leon";
	names[size++] = "Bob";
	names[size++] = "Roger";
	names[size++] = "Alex";
	names[size++] = "Astrid";
	names[size++] = "Tripouille";
	names[size++] = "Patrice";
	return (names[rand() % size]);
}

int		main(void)
{
	ZombieEvent		ze;
	Zombie			*zombie;
	int				i;

	ze.setZombieType("Heapeur");
	i = -1;
	while (++i < 10)
	{
		zombie = ze.randomChump();
		zombie->announce();
		delete zombie;
	}
	ze.setZombieType("Stackeur");
	i = -1;
	while (++i < 10)
	{
		Zombie		z(get_rand_name(), ze.getZombieType());
		z.advert();
	}
	return (0);
}
