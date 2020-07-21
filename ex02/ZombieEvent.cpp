/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:31:27 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:59:00 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_zombie_type = "walker";
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_zombie_type = type;
}

std::string		ZombieEvent::getZombieType(void)
{
	return (this->_zombie_type);
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_zombie_type));
}

Zombie		*ZombieEvent::randomChump(void)
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
	return (new Zombie(names[rand() % size], this->_zombie_type));
}
