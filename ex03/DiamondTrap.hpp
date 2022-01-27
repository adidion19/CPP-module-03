/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:27:01 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:30:03 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	private:
		std::string _name_trap;
	public:
		using ScavTrap::attack;
		DiamondTrap(std::string name);
		DiamondTrap( const DiamondTrap &obj );
		DiamondTrap &operator=( const DiamondTrap &obj );
		void whoAmI();
		~DiamondTrap();
};

#endif