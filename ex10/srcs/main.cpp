#include <iostream>
#include <fstream>
#include <cstring>

void	read_cin(void)
{
	char	c = 0;

	std::cin.clear();
	while ((c = std::cin.get()) != EOF)
		std::cout << c;
}

void	cat_file(std::string fileName)
{
	std::ifstream	file;
	char			c;

	if (fileName == "-")
		return (read_cin());
	file.open(fileName);
	if (!file.is_open())
		std::cerr << "cato9tails: " << fileName	<< ": " << strerror(errno) << std::endl;
	else
		while ((c = file.get()) != EOF)
			std::cout << c;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		read_cin();
	else
		while (*++av)
			cat_file(*av);	
	return (0);
}