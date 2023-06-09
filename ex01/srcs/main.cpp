/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 16:41:59 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/05/26 13:52:53 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	// ClapTrap	hanz("Hanz");
	std::string	target = "target";

	// std::cout << "Name of claptrap is : " << hanz.getName() << std::endl;
	// std::cout << "HP of claptrap is : " << hanz.getHP() << std::endl;
	// std::cout << "EP of claptrap is : " << hanz.getEP() << std::endl;
	// std::cout << "AttckDmg of claptrap is : " << hanz.getAttckDmg() << std::endl;
	// hanz.attack(target);
	// hanz.takeDamage(2);
	// hanz.beRepaired(10);
	// hanz.attack(target);
	// hanz.takeDamage(14);

	ScavTrap	benny("benny");

	benny.attack(target);
	benny.beRepaired(20);
	std::cout << "Name of Scavtrap is : " << benny.getName() << std::endl;
	benny.guardGate();


	return (0);
}