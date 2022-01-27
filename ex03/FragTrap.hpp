/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <adidion@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:58:49 by adidion           #+#    #+#             */
/*   Updated: 2022/01/27 11:29:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	protected:
	
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap( const FragTrap &obj );
		FragTrap &operator=( const FragTrap &obj );
		~FragTrap();
		void highFivesGuys(void);
		void attack(std::string const & target);
};

#endif