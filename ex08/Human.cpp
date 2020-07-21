/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:44:24 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 16:44:25 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

typedef void (Human::*method)(std::string const&);

void Human::meleeAttack(std::string const &target)
{
	std::cout << "meleeAttack " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "rangedAttack " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidatingShout " << target << std::endl;
}

void Human::action(std::string const &action_name,
					std::string const &target)
{
	std::pair <std::string, method>	methods[3] = {
		make_pair("meleeAttack", &Human::meleeAttack),
		make_pair("rangedAttack", &Human::rangedAttack),
		make_pair("intimidatingShout", &Human::intimidatingShout),
	};
	int		i = -1;

	while (++i < 3)
		if (action_name == methods[i].first)
			return ((this->*(methods[i].second))(target));
	std::cerr << "ERROR" << std::endl;
}
