/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:18:01 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 13:01:43 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &Weaponb);
		void	attack();
	private :
		Weapon 	*WeaponB;
		std::string		_name;
};

#endif
