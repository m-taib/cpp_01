/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:18:51 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 13:26:34 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &club)
{
	_name = name;
	WeaponA = club;
}

void	HumanA::attack()
{
	std::cout << _name << "attacks with their " << WeaponA->getType() << std::endl;	
}
