/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:34:07 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 13:08:31 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack() const;
};