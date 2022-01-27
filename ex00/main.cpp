/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:54:59 by adidion           #+#    #+#             */
/*   Updated: 2022/01/25 14:59:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Moulinette");

	a.attack("Billy");
	a.takeDamage(8);
	a.beRepaired(5);
	a.takeDamage(9);
	a.beRepaired(5);
}