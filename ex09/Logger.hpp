/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:44:16 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 16:44:17 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP
#include <iostream>
#include <fstream>
#include <time.h>

class Logger
{
	public:
		Logger(std::string dest) : _dest(dest) {}

		void			log(std::string const &dest, std::string const &message);

	private:
		void			logToConsole(std::string const &msg);
		void			logToFile(std::string const &msg);
		std::string		makeLogEntry(std::string const &msg);

		std::string		_dest;
};

#endif