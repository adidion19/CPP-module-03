/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:26:06 by adidion           #+#    #+#             */
/*   Updated: 2022/01/25 14:56:32 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class	ClapTrap
{
	private:
		std::string _name;
		int _hitpoint;
		int _energie;
		int _damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap( const ClapTrap &obj );
		ClapTrap &operator=( const ClapTrap &obj );
		std::string getName() const;
		int getHitpoint() const;
		int getDamage() const;
		int getEnergie() const;
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif