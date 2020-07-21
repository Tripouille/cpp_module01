/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:30:54 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:58:49 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "Roger";
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
