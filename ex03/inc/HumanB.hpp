/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:34:09 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 13:08:35 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		//prevent the dangling pointer
		//In C++, when we pass arg instead of &arg to te function, it will use copy of object
		void setWeapon(Weapon& weapon);
};