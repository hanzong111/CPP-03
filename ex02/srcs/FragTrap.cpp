/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:26:55 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/18 00:38:11 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->AttckDmg = 30;
	std::cout << "(FragTrap) Constructor for ("<< this->name << ") called"<< std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "(FragTrap) Destructor for ("<< this->name << ") called"<< std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &src)
{
	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints = src.EnergyPoints;
	this->AttckDmg = src.AttckDmg;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "(Fragtrap) " << this->name << " attacks " << target
			<< ", causing " << this->AttckDmg << " points of damage!" << std::endl;
		this->EnergyPoints--;
		std::cout << "(Fragtrap) " << this->name << "'s Energy Points has been reduced to "
			<< this->EnergyPoints << std::endl;
	}
	else
		std::cout << "(FragTrap) " << this->name << " does not have enough energy to attack." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->EnergyPoints > 0)
	{
		std::cout << "(FragTrap) " << this->name << " Wants to High5 !!!" << std::endl;
		this->EnergyPoints--;
		std::cout << "(Fragtrap) " << this->name << "'s Energy Points has been reduced to "
			<< this->EnergyPoints << std::endl;
	}
	else
		std::cout << "(FragTrap) " << this->name << " does not have enough energy to High5." << std::endl;
}