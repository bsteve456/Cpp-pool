/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:44 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 14:48:58 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called\n";
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "String Constructor called\n";
	name = name;
	HPoint = 100;
	MHPoint = 100;
	EPoint = 100;
	MEPoint = 100;
	level = 1;
	MDmg = 30;
	RDmg = 20;
	Adr = 5;
}

void	FragTrap::rangedAttack(std:: const & target)
{
	std::cout << "FR4G-TP "<< name << " attacks " << target << " at range, causing " << RDmg << " points of damage!\n";
}

void	FragTrap::meleeAttack(std:: const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " with a melee attack, causing " << MDmg << " points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * Adr / 100);
	if (HPoint - (int)result <= 0)
		HPoint = 0;
	else
		HPoint -= (int)result;
	std::cout << "FR4G-TP " << name << " did take " << (int)result << " of damage!\n";
	if (HPoint > 0)
		std::cout << "FR4G-TP "<< "Hit point left : " << Hpoint << '\n';
	else
		std::cout << "FR4G-TP " << name << " is dead\n";
}

void	FragTrap::beRepaired(unsigned int amount)
{
	int heal;
	int mem;

	mem = HPoint + amount;
	if (mem > MHPoint)
	{
		HPoint = MHPoint;
		heal = amount - (MHPoint - mem);
	}
	else
	{
		HPoint += amount;
		heal = amount;
	}
	std::cout << "FR4G-TP " << name << " healed " << heal << "HP\n";
	std::cout << "FR4G-TP Hit Point are at : " << HPoint << '\n';
}

void	vaulthunter_dot_exe(std::string const & target)
{

}
