#include <iostream>

int main(int ac, char **av)
{
	std::locale loc;
	std::string str;
	if (ac > 1)
	{	
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (std::string::size_type i = 0; i < str.length(); i++)
				std::cout << std::toupper(str[i], loc);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
}
