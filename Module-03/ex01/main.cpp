/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:56:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 16:52:31 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(time(0));
	std::cout << "\n         -----FIRST PART-----\n" << std::endl;
	FragTrap player("A Man");
	player.rangedAttack("Ancalagon");
	player.meleeAttack("Ancalagon");
	player.takeDamage(50);
	player.beRepaired(20);
	player.vaulthunter_dot_exe("Ancalagon");
	player.vaulthunter_dot_exe("Ancalagon");
	player.vaulthunter_dot_exe("Ancalagon");
	player.vaulthunter_dot_exe("Ancalagon");
	player.vaulthunter_dot_exe("Ancalagon");
	player.takeDamage(50);
	player.takeDamage(35);
	std::cout << "\n         -----SECOND PART-----\n" << std::endl;
	ScavTrap robot1("unknown");
	ScavTrap robot = robot1;
	ScavTrap human1("Dragon slayer");
	ScavTrap human;
	human = human1;
	robot.rangedAttack("Ship");
	robot.rangedAttack("Ship");
	robot.takeDamage(rand() % 25);
	robot.challengeNewcomer(rand() % 2);
	human.meleeAttack("Dragon");
	human.takeDamage(10 + rand() % 70);
	human.challengeNewcomer(rand() % 2);

}
