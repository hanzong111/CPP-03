/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:13:55 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/16 00:25:47 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string	name)
{
	this->name = name;
	std::cout << "New ClapTrap name is :" << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for ("<< this->name << ") called"<< std::endl;
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
		std::cout << "ClapTrap " << this->name << "is exhausted." << std::endl;

}