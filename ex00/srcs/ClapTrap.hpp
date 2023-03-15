/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:57:58 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/16 00:10:31 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class ClapTrap
{
	public	:
				ClapTrap(std::string name);
				~ClapTrap();
				void	attack(const std::string &target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);

	private	:
				std::string	name;
				int			HitPoints = 10;
				int			EnergyPoints = 10;
				int			AttckDmg = 0;
};

#endif