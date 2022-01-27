#include <iostream>

int main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)(std::toupper(static_cast<unsigned char>(argv[i][j])));
	}
	std::cout << std::endl;
	return 0;
}

int main(int argc, char **argv)
{
	int	i = 0;
	int	j;

	if (argc < 2)
	{
		write(1, "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 39);
		return (0);
	}
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			std::cout << (char)(std::toupper(static_cast<unsigned char>(argv[i][j])));
	}
	std::cout << std::endl;
	return 0;
}