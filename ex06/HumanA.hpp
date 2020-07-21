/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:56:55 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 15:56:56 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}
		void		attack(void);

	private:
		std::string		_name;
		Weapon&			_weapon;
};

#endif