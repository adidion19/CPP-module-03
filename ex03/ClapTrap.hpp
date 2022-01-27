/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:17:38 by adidion           #+#    #+#             */
/*   Updated: 2022/01/26 10:35:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class	ClapTrap
{
	protected:
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
		void SetHitpoint(unsigned int i);
		void SetDamage(unsigned int i);
		void SetEnergie(unsigned int i);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif