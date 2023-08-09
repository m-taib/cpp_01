/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:07:50 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 13:11:57 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::~HumanB()
{

}

HumanB::HumanB(std::string name)
{
	_name = name;
	WeaponB = NULL;
}

void	HumanB::setWeapon(Weapon &WeaponB)
{
	this->WeaponB = &WeaponB;
}

void	HumanB::attack()
{
	if (WeaponB == NULL)
		std::cout << _name << "Does not have a weapon";
	else
		std::cout << _name << "attacks with their " << WeaponB->getType() << std::endl;
}
