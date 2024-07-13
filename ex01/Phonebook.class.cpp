/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 02:13:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	verif_char(std::string str)
{
	if (str.size() > 9)
		std::cout << std::setw(9) << std::setfill(' ') << str.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::setfill(' ') << str << '|';
}

void	ft_index(Phonebook &repertoire, std::string input)
{
	int	index;

	index = std::atoi(input.c_str());
	if (index >= 1 && index <= 8)
	{
		if (repertoire.contact[index - 1].get_Fname().empty())
		{
			std::cout << "Contact " << index << " does not exist" << std::endl;
			ft_index2(repertoire, input);
		}
		else
		{
			std::cout << "First name : " << repertoire.contact[index - 1].get_Fname() << std::endl;
			std::cout << "Last name : " << repertoire.contact[index - 1].get_Lname() << std::endl;
			std::cout << "Nickname : " << repertoire.contact[index - 1].get_Nname() << std::endl;
			std::cout << "Phone number : " << repertoire.contact[index - 1].get_number() << std::endl;
			std::cout << "Darkest secret : " << repertoire.contact[index - 1].get_ds() << std::endl;
		}
	}
	else
	{
		std::cout << "Contacts are between 1 and 8" << std::endl;
		ft_index2(repertoire, input);
	}
		
}

void	ft_index2(Phonebook &repertoire, std::string input)
{
	std::cout << "index or no? ";
	std::getline(std::cin, input);
	if(input == "no")
		return ;
	if (std::isdigit(input[0]) && input.size() == 1)
	{
		ft_index(repertoire, input);
	}
	else
	{
		std::cout << "Index format is invalid" << std::endl;
		ft_index2(repertoire, input);
	}
		
}

void	ft_search(Phonebook &repertoire, std::string input)
{
	int	j;
	
	j = 0;
	std::cout << "     index" << '|' << "first name" << '|' << " last name" << '|' << "  nickname|" << std::endl;
	while (j < 8)
	{
		repertoire.contact[j].set_index(j + 1);
		std::cout << std::setw(10) << std::setfill(' ') << repertoire.contact[j].get_index() << '|';
		verif_char(repertoire.contact[j].get_Fname());
		verif_char(repertoire.contact[j].get_Lname());
		verif_char(repertoire.contact[j].get_Nname());
		std::cout << std::endl;
		j++;
	}
	ft_index2(repertoire, input);
}