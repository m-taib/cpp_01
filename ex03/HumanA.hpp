/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:16:02 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/22 13:24:20 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon& WeaponA;
	public :
		void	attack();
		HumanA();
		HumanA(std::string name, Weapon &club);
		~HumanA();
	private :
		std::string		_name;
};

#endif
