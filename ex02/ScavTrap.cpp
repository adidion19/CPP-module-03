/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:22:50 by adidion           #+#    #+#             */
/*   Updated: 2022/01/26 13:31:37 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "default";
	_hitpoint = 100;
	_energie = 50;
	_damage = 20;
	std::cout << "ScavTrap spawning..." << std::endl;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap &obj )
{
	*this = obj;
	std::cout << "ScavTrap spawning..." << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string name)
{
	_name = name;
	_hitpoint = 100;
	_energie = 50;
	_damage = 20;
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
	std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode." << std::endl;
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
