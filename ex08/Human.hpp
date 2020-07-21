/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:44:25 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 16:44:25 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
#include <iostream>

class Human
{
	private:
		void meleeAttack(std::string const &target);
		void rangedAttack(std::string const &target);
		void intimidatingShout(std::string const &target);

	public:
		void action(std::string const &action_name, std::string const &target);
};

#endif