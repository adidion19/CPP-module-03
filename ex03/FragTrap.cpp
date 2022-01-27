/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:58:45 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:24:53 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_hitpoint = 100;
	this->_energie = 100;
	this->_damage = 30;
	std::cout << "FragTrap spawning..." << std::endl;
	return ;
}

FragTrap::FragTrap( const FragTrap &obj )
{
	*this = obj;
	std::cout << "FragTrap spawning..." << std::endl;
	return ;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_energie = 100;
	this->_damage = 30;
	std::cout << "FragTrap spawning..." << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=( const FragTrap &obj )
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_energie = obj.getEnergie();
	this->_hitpoint = obj.getHitpoint();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap has been killed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << ": Give me an high five dude !" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	if (_energie && _hitpoint > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
		<< this->getDamage() << " points of damage!" << std::endl;
		_energie--;
	}
	else
	{
		if (!_hitpoint)
			std::cout << "FragTrap is already dead" << std::endl;
		if (!_energie)
			std::cout << "FragTrap has no energy left" << std::endl;
	}
}