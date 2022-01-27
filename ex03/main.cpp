/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:31:03 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:26:05 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("hello");
	a.whoAmI();
	a.highFivesGuys();
	a.guardGate();
	std::cout << "Diamond stats:" << std::endl << "hitpoint: " << a.getHitpoint()
	<< std::endl << "energy: " << a.getEnergie() << std::endl << "attack: " << a.getDamage() << std::endl;
	a.attack("billy");
	a.takeDamage(20);
	std::cout << "Diamond stats:" << std::endl << "hitpoint: " << a.getHitpoint()
	<< std::endl << "energy: " << a.getEnergie() << std::endl << "attack: " << a.getDamage() << std::endl;
}