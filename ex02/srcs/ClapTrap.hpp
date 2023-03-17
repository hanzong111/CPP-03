/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:57:58 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/17 15:56:43 by ojing-ha         ###   ########.fr       */
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
				/*	Orthodox Canonical Class Form */
				ClapTrap(void);
				ClapTrap(std::string name);
				ClapTrap(ClapTrap &src);
				~ClapTrap();
				ClapTrap	&operator=(ClapTrap &src);

				/*	Member Functions */
				void	attack(const std::string &target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);
				std::string		getName(void);
				unsigned int	getHP(void);
				unsigned int	getEP(void);
				unsigned int	getAttckDmg(void);

	protected :
				std::string	name;
				unsigned int			HitPoints;
				unsigned int			EnergyPoints;
				unsigned int			AttckDmg;
};

#endif