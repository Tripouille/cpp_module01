/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:26:46 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:58:26 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	this->_name = "default";
	this->_color = "default";
}

Pony::Pony(std::string name)
{
	this->_name = name;
	this->_color = "default";
}

Pony::Pony(std::string name, std::string color)
{
	this->_name = name;
	this->_color = color;
}

std::string		Pony::get_name(void)
{
	return (this->_name);
}

std::string		Pony::get_color(void)
{
	return (this->_color);
}

void			Pony::presentation(void)
{
	std::cout << "Hello everyone i'm " << this->_name;
	std::cout << " a beautifull " << this->_color << " pony.\n";
}

void			Pony::greet(Pony *target)
{
	std::cout << this->_name << " greet " << target->_name << ".\n";
}
