/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:39:16 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/18 00:30:27 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttckDmg = 20;
	std::cout << "(ScavTrap) Constructor for ("<< this->name << ") called"<< std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "(ScavTrap) Destructor for ("<< this->name << ") called"<< std::endl;
}

/* Copy Operator */
// ScavTrap::ScavTrap(ScavTrap &src)
// {
// 	*this = src;
// }

/*	Copy assignation operator */
ScavTrap	&ScavTrap::operator=(ScavTrap &src)
{
	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttckDmg = src.AttckDmg;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "(ScavTrap) " << this->name << " is in Gate keeper mode" <<std::endl;
		this->EnergyPoints--;
		std::cout << "(Scavtrap) " << this->name << "'s Energy Points has been reduced to "
			<< this->EnergyPoints << std::endl;
	}
	else
		std::cout << "(ScavTrap) " << this->name << " does not have enough energy to guard" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "(Scavtrap) " << this->name << " attacks " << target
			<< ", causing " << this->AttckDmg << " points of damage!" << std::endl;
		this->EnergyPoints--;
		std::cout << "(Scavtrap) " << this->name << "'s Energy Points has been reduced to "
			<< this->EnergyPoints << std::endl;
	}
	else
		std::cout << "(ScavTrap) " << this->name << " does not have enough energy to attack." << std::endl;
}
