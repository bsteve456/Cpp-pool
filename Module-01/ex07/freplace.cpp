/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freplace.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:22:47 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 13:47:45 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "freplace.hpp"

int	find_string(std::string file, std::string s)
{
	std::string line;
	std::ifstream in(file);

	while(std::getline(in, line))
	{
		size_t pos = line.find(s);
		if (pos != std::string::npos)
		{
			in.close();
			return (1);
		}
	}
	in.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string str = std::string(av[1]) + std::string(".replace");
		std::ifstream in(av[1]);
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string line;
		size_t len = s1.length();
	 	if (!in)
    	{
			std::cerr << "Could not open " << av[1] << "\n";
    		return (1);
  	 	}
		if (s1.compare("") == 0 || s2.compare("") == 0 || s1.compare(s2) == 0 ||
			find_string(av[1], s1) == 0)
		{
			in.close();
			std::cerr << "One or two of the string(s) is empty.\nOr s1 is the same as s2.\nOr s1 not find in the file." << std::endl;
			return (1);
		}
		std::ofstream ou(str);
		while(std::getline(in, line))
		{
			size_t pos = line.find(s1);
			if (pos != std::string::npos)
				line.replace(pos, len, s2);
			ou << line << '\n';
		}
		ou.close();
		in.close();
		return (0);
	}
	std::cerr << "Error: need 4 arguments.\n";
}

