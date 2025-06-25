/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:34:12 by dtanski           #+#    #+#             */
/*   Updated: 2025/06/24 13:20:10 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string  type;
	public:
		Weapon(std::string type);
		~Weapon();
		const	std::string& getType();
		void	setType(std::string new_type);
};

#endif