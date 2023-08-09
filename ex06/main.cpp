/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:27:02 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/23 21:43:59 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int ac, char **av)
{
	Harl	harli;
	int		i;
	std::string		Levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	++av;
	while (++i < 4 && *av != Levels[i]);
	if (ac == 1 || ac > 2)
		return (0);
	switch (i)
	{
		case 0:
			harli.complain(*av);
			harli.complain("INFO");
			harli.complain("WARNING");
			harli.complain("ERROR");
			break;
		case 1:
			harli.complain(*av);
			harli.complain("WARNING");
			harli.complain("ERROR");
			break;
		case 2:
			harli.complain(*av);
			harli.complain("ERROR");
			break;
		case 3:
			harli.complain(*av);
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
