/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:22:28 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:59:51 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

void	*Human::identify(void)
{
	return (this->_brain.identify());
}

Brain	&Human::getBrain(void)
{
	return (this->_brain);
}

