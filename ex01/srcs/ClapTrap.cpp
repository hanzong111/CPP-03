/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:13:55 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/17 15:56:39 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "(ClapTrap) Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string	name)
{
	this->name = name;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->AttckDmg = 0;
	std::cout << "(ClapTrap) Constructor for ("<< this->name << ") called"<< std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "(ClapTrap) Destructor for ("<< this->name << ") called"<< std::endl;
}

/* Copy Operator */
ClapTrap::ClapTrap(ClapTrap &src)
{
	*this = src;
}

/*	Copy assignation operator */
ClapTrap	&ClapTrap::operator=(ClapTrap &src)
{
	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttckDmg = src.AttckDmg;
	return (*this);
}

std::string		ClapTrap::getName(void)
{
	return (this->name);
}

unsigned int	ClapTrap::getHP(void)
{
	return (this->HitPoints);
}

unsigned int	ClapTrap::getEP(void)
{
	return (this->EnergyPoints);
}

unsigned int	ClapTrap::getAttckDmg(void)
{
	return (this->AttckDmg);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "Claptrap " << this->name << " attacks " << target
			<< ", causing " << this->AttckDmg << " points of damage!" << std::endl;
		this->EnergyPoints--;
		std::cout << "Claptrap " << this->name << "'s Energy Points has been reduced to "
			<< this->EnergyPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " does not have enough energy to attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints < amount)
		this->HitPoints = 0;
	else
		this->HitPoints -= amount;
	std::cout << this->name << " took " << amount << " amount of damage !" << std::endl;
	std::cout << this->name << " is left with " << this->HitPoints << "HP" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EnergyPoints > 0)
	{
		this->HitPoints += amount;
		std::cout << "ClapTrap " << this->name
			<< " succesfully repaired itself for " << amount << "HP" << std::endl;
		std::cout << "Claptrap " << this->name
			<< " now have " << this->HitPoints << "HP" << std::endl;
		this->EnergyPoints--;
		std::cout << "Claptrap " << this->name
			<< "'s Energy Points has been reduced to " << this->EnergyPoints << std::endl;

	}
	else
		std::cout << "ClapTrap " << this->name
			<< " does not have enough energy to repair itself :(" << std::endl;

}