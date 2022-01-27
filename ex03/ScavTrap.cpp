/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:22:50 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:21:57 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "default";
	this->_hitpoint = 100;
	this->_energie = 50;
	this->_damage = 20;
	std::cout << "ScavTrap spawning..." << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &obj )
{
	*this = obj;
	std::cout << "ScavTrap spawning..." << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_energie = 50;
	this->_damage = 20;
	std::cout << "ScavTrap spawning..." << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=( const ScavTrap &obj )
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_energie = obj.getEnergie();
	this->_hitpoint = obj.getHitpoint();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been killed" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (_energie && _hitpoint > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
		<< this->getDamage() << " points of damage!" << std::endl;
		_energie--;
	}
	else
	{
		if (!_hitpoint)
			std::cout << "ScavTrap is already dead" << std::endl;
		if (!_energie)
			std::cout << "ScavTrap has no energy left" << std::endl;
	}
}