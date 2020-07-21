#include <iostream>
#include <string.h>
#include <fstream>

int		error(std::string errorMessage)
{
	std::cerr << errorMessage << std::endl;
	return (-1);
}

int		check_arguments(int ac, char **av)
{
	if (ac != 4)
		return (error("Error replace take 3 arguments (FILENAME, S1, S2)."));
	else if (!strlen(av[1]) || !strlen(av[2]) || !strlen(av[3]))
		return (error("Error file name or S1 or S2 can't be empty."));
	return (0);
}

void	replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream	source;
	std::ofstream	dest;
	char			c;
	unsigned long	size = 0;

	source.open(filename);
	if (source.is_open())
	{
		dest.open(filename + ".replace");
		while (source.get(c))
		{
			if (size && c != s1[size])
			{
				if (size == s1.size())
					dest << s2;
				else
					dest << s1.substr(0, size);
				size = 0;
			}
			if (c == s1[size])
				size++;
			else
				dest << c;
		}
	}
	else
		std::cerr << "Error can't open " << filename << "." << std::endl;
}

int		main(int ac, char **av)
{
	if (check_arguments(ac, av) != 0)
		return (-1);
	replace(av[1], av[2], av[3]);
	return (0);
}