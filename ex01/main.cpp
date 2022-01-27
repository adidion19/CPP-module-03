/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:31:03 by adidion           #+#    #+#             */
/*   Updated: 2022/01/18 13:35:13 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a("Robert");

	a.guardGate();
	a.attack("Julien");
	a.takeDamage(4);
	a.beRepaired(3);
}