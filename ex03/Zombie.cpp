/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:30:54 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:59:14 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
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
	this->_name = names[rand() % size];
	this->_type = "Walker";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	this->_type = "Walker";
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
}

void		Zombie::advert(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type;
	std::cout << ")> Buuuuuuuuuuuuuuuuurrrrrgeeeeeeeeeeeeeer. . .\n";
}

void		Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type;
	std::cout << ")> Hi everyone.\n";
}
