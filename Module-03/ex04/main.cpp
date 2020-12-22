/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:56:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 19:09:32 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(time(0));
	std::cout << "\n         -----FIRST PART-----\n" << std::endl;
	FragTrap player1("A Man");
	FragTrap player = player1;
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
	ScavTrap robot;
	ScavTrap robot1("unknown");
	robot = robot1;
	ScavTrap human("Dragon slayer");
	robot.rangedAttack("Ship");
	robot.rangedAttack("Ship");
	robot.takeDamage(rand() % 25);
	robot.challengeNewcomer(rand() % 2);
	human.meleeAttack("Dragon");
	human.takeDamage(10 + rand() % 70);
	human.challengeNewcomer(rand() % 2);
	std::cout << "\n         -----THIRD PART-----\n" << std::endl;
	NinjaTrap ninja;
	NinjaTrap ninja1("ninja");
	ninja = ninja1;
	NinjaTrap ninja2("ninja2");
	ninja2.takeDamage(20);
	ninja2.takeDamage(20);
	FragTrap frag("robot");
	ScavTrap scav("naive man");
	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(frag);
	std::cout << "\n         -----FOURTH PART-----\n" << std::endl;
	SuperTrap super;
	SuperTrap super1("Super");
	SuperTrap super2 = super1;
	super = super2;
	super.meleeAttack("cool");
	super.rangedAttack("cool");
	super.vaulthunter_dot_exe("Ancalagon");
	super.ninjaShoebox(ninja2);
	super.ninjaShoebox(frag);
}
