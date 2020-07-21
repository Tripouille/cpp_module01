/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:31:02 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:59:18 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		Zombie(std::string name, std::string type);

		void		advert(void) const;
		void		announce(void) const;


	private:
		std::string				_type;
		std::string				_name;
};

#endif
