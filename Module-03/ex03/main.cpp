/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:56:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 16:46:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::srand(time(0));
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
	ScavTrap robot("unknown");
	ScavTrap human("Dragon slayer");
	robot.rangedAttack("Ship");
	robot.rangedAttack("Ship");
	robot.takeDamage(rand() % 25);
	robot.challengeNewcomer(rand() % 2);
	human.meleeAttack("Dragon");
	human.takeDamage(10 + rand() % 70);
	human.challengeNewcomer(rand() % 2);
	NinjaTrap ninja("ninja");
	NinjaTrap ninja2("ninja2");
	ninja2.takeDamage(20);
	FragTrap frag("robot");
	ScavTrap scav("naive man");
	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(frag);


}
