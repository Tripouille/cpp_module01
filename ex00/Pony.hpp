/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:24:55 by jgambard          #+#    #+#             */
/*   Updated: 2020/05/19 04:58:30 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony
{
	public:
		Pony(void);
		Pony(std::string name);
		Pony(std::string name, std::string color);

		std::string		get_name(void);
		std::string		get_color(void);
		void			presentation(void);
		void			greet(Pony *target);

	private:
		std::string		_name;
		std::string		_color;
};

#endif
