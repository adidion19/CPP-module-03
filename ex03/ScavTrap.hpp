/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:21:24 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:29:43 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	protected:
	
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( const ScavTrap &obj );
		ScavTrap &operator=( const ScavTrap &obj );
		~ScavTrap();
		void guardGate();
		void attack(std::string const & target);
};

#endif