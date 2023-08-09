/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copy.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:55:46 by mtaib             #+#    #+#             */
/*   Updated: 2023/07/23 15:19:04 by mtaib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copy.hpp"

void	CopyContent(std::string FileName, std::string S1, std::string S2)
{
	std::fstream 	InFile;
	std::fstream 	OutFile;
	std::string 	line;
	std::string		str;
	std::string		word;
	int		i;

	i = 0;
	InFile.open(FileName, std::ios::in);
	OutFile.open("OutFile", std::ios::out);
	if (InFile.is_open())
	{
		OutFile.is_open();
		while (getline(InFile, line))
		{
			std::istringstream iss(line);
			i = 0;
			while (iss >> word)
			{
				if (i != 0)
					OutFile << " ";
				if (word == S1)	
					OutFile << S2;
				else
					OutFile << word;
				i++;
			}
			OutFile << std::endl;
		}
		InFile.close();
	}
	else
		std::cout << "File Not Found" << std::endl;

}
