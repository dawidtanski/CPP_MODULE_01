/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:34:02 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 13:12:13 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type):type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}