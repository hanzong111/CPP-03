/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:07:46 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/17 16:00:16 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public	:
				/*	Orthodox Canonical Class Form */
				ScavTrap(void);
				ScavTrap(std::string name);
				~ScavTrap(void);
				ScavTrap(ScavTrap &src);
				ScavTrap	&operator=(ScavTrap &src);

				/*	Member Functions */
				void	guardGate(void);
				void	attack(const std::string &target);
};
#endif