/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 00:21:06 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/03/18 00:39:02 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public	ClapTrap
{
	public	:
				/*	Orthodox Canonical Class Form */
				~FragTrap(void);
				FragTrap(std::string name);
				FragTrap(FragTrap &src);
				FragTrap	&operator=(FragTrap &src);

				/*	Member Functions */
				void	highFivesGuys(void);
				void	attack(const std::string &target);

};
#endif