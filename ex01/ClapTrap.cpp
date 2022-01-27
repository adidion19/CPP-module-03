/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:17:21 by adidion           #+#    #+#             */
/*   Updated: 2022/01/26 13:27:29 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hitpoint(10), _energie(10), _damage(0)
{
	std::cout << "ClapTrap Spawning..." << std::endl;
	return ;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) : _name(obj.getName()), _hitpoint(10), _energie(10), _damage(0)
{
	std::cout << "ClapTrap Spawning..." << std::endl;
	*this = obj;
	return ;
}

ClapTrap::ClapTrap( const std::string name ) : _name(name), _hitpoint(10), _energie(10), _damage(0)
{
	std::cout << "ClapTrap Spawning..." << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=( const ClapTrap &obj )
{
	this->_name = obj.getName();
	this->_damage = obj.getDamage();
	this->_energie = obj.getEnergie();
	this->_hitpoint = obj.getHitpoint();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap has been killed" << std::endl;
	return ;
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitpoint() const
{
	return (this->_hitpoint);
}

int ClapTrap::getEnergie() const
{
	return (this->_energie);
}

int ClapTrap::getDamage() const
{
	return (this->_damage);
}

void ClapTrap::attack(std::string const & target)
{
	if (_energie && _hitpoint > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
		<< this->getDamage() << " points of damage!" << std::endl;
		_energie--;
	}
	else
	{
		if (!_hitpoint)
			std::cout << "ClapTrap is already dead" << std::endl;
		if (!_energie)
			std::cout << "ClapTrap has no energy left" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoint > 0)
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
	if (_hitpoint <= 0)
	{
		std::cout << "ClapTrap is already dead" << std::endl;
		return ;
	}
	if (_hitpoint > 0)
		_hitpoint -= amount;
	if (_hitpoint <= 0)
		std::cout << "ClapTrap has died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (0 >= _hitpoint || !_energie)
	{
		if (0 >= _hitpoint)
			std::cout << "ClapTrap is already dead" << std::endl;
		if (!_energie)
			std::cout << "ClapTrap has no energy left" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " is repaired of " << amount << " hit points!" << std::endl;
	_hitpoint += amount;
	_energie--;
}

void ClapTrap::SetHitpoint(unsigned int i)
{
	this->_hitpoint = i;
}

void ClapTrap::SetEnergie(unsigned int i)
{
	this->_energie = i;
}

void ClapTrap::SetDamage(unsigned int i)
{
	this->_damage = i;
}
