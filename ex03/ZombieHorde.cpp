/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 16:53:49 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:59:22 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->_horde = new Zombie[n];
	this->_size = n;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_horde;
}

void	ZombieHorde::announce(void) const
{
	int		i;

	i = -1;
	while (++i < this->_size)
		this->_horde[i].announce();
}


