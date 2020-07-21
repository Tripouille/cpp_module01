/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgambard <jgambard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 16:44:15 by jgambard          #+#    #+#             */
/*   Updated: 2020/07/21 16:44:16 by jgambard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

typedef void	(Logger::*method)(std::string const&);

void			Logger::logToConsole(std::string const &msg)
{
	std::cout << msg << std::endl;
}

void			Logger::logToFile(std::string const &msg)
{
	std::ofstream	file;

	file.open(_dest, std::ofstream::app);
	file << msg << std::endl;
	file.close();
}

std::string		Logger::makeLogEntry(std::string const &msg)
{
	time_t			rawtime;
	std::string		infos;

	time(&rawtime);
	infos = asctime(localtime(&rawtime));
	return (infos.substr(0, infos.size() - 1) + std::string(": ") + msg);
}

void			Logger::log(std::string const &dest, std::string const &message)
{
	std::pair <std::string, method> methods[2] = {
		make_pair("console", &Logger::logToConsole),
		make_pair("file", &Logger::logToFile)
	};
	int		i = -1;

	while (++i < 2)
		if (dest == methods[i].first)
			return ((this->*(methods[i].second))(makeLogEntry(message)));
	std::cerr << "ERROR" << std::endl;
}
