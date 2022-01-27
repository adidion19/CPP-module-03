/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:26:54 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:28:17 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	_name_trap = name;
	_damage = 30;
	_hitpoint = 100;
	std::cout << "DiamondTrap spawned" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj )
{
	std::cout << "DiamondTrap spawned" << std::endl;
	*this = obj;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &obj )
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_energie = obj.getEnergie();
	this->_hitpoint = obj.getHitpoint();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap has been killed" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name: " << _name_trap << std::endl << "ClapTrap name: " << ClapTrap::_name << std::endl;
}
