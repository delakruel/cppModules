#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i;
	size_t	j;
	std::string str;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else while (i < argc)
	{
		j = 0;
		str = std::string(argv[i]);
		while (j < str.length())
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}