/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 15:56:53 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 15:56:54 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::attack(void)
{
	std::cout << _name << " attacking with " << _weapon.getType() << "." << std::endl;
}
