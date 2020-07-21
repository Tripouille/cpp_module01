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