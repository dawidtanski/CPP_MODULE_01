/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:33:50 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 13:19:18 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){}

HumanB::~HumanB(){};

void	HumanB::attack() const
{
	if (this->weapon)
		std::cout << this->name << " attacks with their  " << this->weapon->getType() << std::endl;
	else
		std::cout << "HumanB has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}