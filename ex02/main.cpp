/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:31:03 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 10:54:07 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap a("Maurice");

	a.highFivesGuys();
	a.attack("Jean-Eude");
	a.takeDamage(4);
	a.attack("Alfred");
	a.beRepaired(3);
	a.takeDamage(40);
}