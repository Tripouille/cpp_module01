/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:56:57 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 15:56:58 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void		HumanB::attack(void)
{
	std::cout << _name << " attacking with " << _weapon->getType() << "." << std::endl;
}
