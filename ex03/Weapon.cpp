/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:00:07 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 12:07:07 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

Weapon::Weapon(std::string type)
{
	setType(type);
}

const std::string&	Weapon::getType()
{
	const std::string	&typeRef = _type;

	return (typeRef);
}

void	Weapon::setType(std::string type)
{
	_type = type;
}
