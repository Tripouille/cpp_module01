/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:31:24 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:58:22 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void		ponyOnTheStack(void)
{
	Pony	my_pony("Roger", "Black");
	Pony	other_pony("Natacha", "Pink");

	my_pony.presentation();
	my_pony.greet(&other_pony);
}

void		ponyOnTheHeap(void)
{
	Pony	*my_pony = new Pony("Roger", "Black");
	Pony	other_pony("Natacha", "Pink");

	my_pony->presentation();
	my_pony->greet(&other_pony);
	delete my_pony;
}

int			main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
