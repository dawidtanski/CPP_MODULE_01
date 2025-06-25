/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:33:54 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 08:03:54 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

// Member initializer list. In case of references on const, we have to use it instead of assignment.
// Member initializer list is done before constructor body 
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << this->name << " attacks with their  " << this->weapon.getType() << std::endl;
}