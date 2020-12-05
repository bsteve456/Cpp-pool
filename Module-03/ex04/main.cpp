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
	std::cout << "          ---- PART 1 ----\n";
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
	std::cout << "          ---- PART 2 ----\n";
	ScavTrap robot("unknown");
	ScavTrap human("Dragon slayer");
	robot.rangedAttack("Ship");
	robot.rangedAttack("Ship");
	robot.takeDamage(rand() % 25);
	robot.challengeNewcomer(rand() % 2);
	human.meleeAttack("Dragon");
	human.takeDamage(10 + rand() % 70);
	human.challengeNewcomer(rand() % 2);
	std::cout << "          ---- PART 3 ----\n";
	NinjaTrap ninja("ninja");
	NinjaTrap ninja2("ninja2");
	ninja2.takeDamage(20);
	ninja2.takeDamage(20);
	FragTrap frag("robot");
	ScavTrap scav("naive man");
	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(frag);
	std::cout << "          ---- PART 4 ----\n";
	SuperTrap super("Super");
	super.meleeAttack("cool");
	super.rangedAttack("cool");
	super.vaulthunter_dot_exe("Ancalagon");
	super.ninjaShoebox(ninja2);
	super.ninjaShoebox(frag);
}
