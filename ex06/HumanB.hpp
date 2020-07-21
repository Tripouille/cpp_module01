/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:56:59 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 15:57:00 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name) : _name(name) {}
		void		attack(void);
		void		setWeapon(Weapon& weapon);

	private:
		std::string		_name;
		Weapon*			_weapon;
};

#endif