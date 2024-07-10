/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/10 22:14:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

void	verif_char(std::string str)
{
	int	k;

	k = 0;
	if (str.size() > 9)
	{
		while (k != 9)
		{
			std::cout << str[k];
			k++;
		}
		std::cout << '.';
		std::cout << '|';
	}
	else
		std::cout << std::setw(10) << std::setfill(' ') << str << '|';
}

void	ft_index(Phonebook &repertoire, std::string input)
{
	int	index;

	index = std::stoi(input);
	if (index >= 1 && index <= 8)
	{
		if (repertoire.contact[index - 1].get_Fname().empty())
			std::cout << "Contact " << index << " does not exist" << std::endl;
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
		std::cout << "Contacts are between 1 and 8" << std::endl;
}

void	ft_search(Phonebook &repertoire, std::string input)
{
	int	j;
	
	j = 0;
	std::cout << "     index" << '|' << "first name" << '|' << " last name" << '|' << "  nickname|" << std::endl;
	while (j < 8)
	{
		repertoire.contact[j].set_index(j + 1);
		std::cout << "         " << repertoire.contact[j].get_index() << '|';
		verif_char(repertoire.contact[j].get_Fname());
		verif_char(repertoire.contact[j].get_Lname());
		verif_char(repertoire.contact[j].get_Nname());
		std::cout << std::endl;
		j++;
	}
	std::cout << "index ? ";
	std::getline(std::cin, input);
	if (std::isdigit(input[0]) && input.size() == 1)
		ft_index(repertoire, input);
	else
		std::cout << "Index format is invalid" << std::endl;
}