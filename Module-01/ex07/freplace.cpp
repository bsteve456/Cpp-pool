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
		if (s1.compare("") == 0 || s2.compare("") == 0)
		{
			std::cerr << "One or two of the string(s) is empty\n";
			return (1);
		}
		std::ofstream ou(str);
		while(std::getline(in, line))
		{
			while(true)
			{
				size_t pos = line.find(s1);
				if (pos != std::string::npos)
					line.replace(pos, len, s2);
				else
					break;
			}
			ou << line << '\n';
		}
		return (0);
	}
	std::cerr << "Error: need 4 arguments.\n";
}

