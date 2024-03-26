/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:36:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/03/26 17:27:08 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

int main() {
	
	Phonebook   repertoire;
	Contact		contact[8];
	std::string input;
	int			i;
	int			j;
	int			k;

	input = "";
	i = 0;
	j = 0;
	k = 0;
	std::cout << "Phonebook : ";
	std::getline(std::cin, input);
	while (input.compare("NULL") != 0)
	{	
		if (input.compare("ADD") == 0)
		{
			std::cout << "First name : ";
			std::getline(std::cin, contact[i].first_name);
			std::cout << "Last name : ";
			std::getline(std::cin, contact[i].last_name);
			std::cout << "Nickname : ";
			std::getline(std::cin, contact[i].nickname);
			std::cout << "Phone number : ";
			std::getline(std::cin, contact[i].phone_number);
			std::cout << "Darkest secret : ";
			std::getline(std::cin, contact[i].darkest_secret);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "     index" << '|' << "first name" << '|' << " last name" << '|' << "  nickname" << std::endl;
			while (j < 8)
			{
				std::cout << "         " << j + 1 << '|';
				contact[j].index = j + 1;
				if (contact[j].first_name.length() > 9)
				{
					while (k != 9)
					{
						std::cout << contact[j].first_name[k];
						k++;
					}
					std::cout << '.';
				}
				else
				{	
					std::cout << std::setw(10) << std::setfill(' ') << contact[j].first_name << '|';
					std::cout << std::setw(10) << std::setfill(' ') << contact[j].last_name << '|';
					std::cout << std::setw(10) << std::setfill(' ') << contact[j].nickname << '|';
					std::cout << std::endl;
				}
					
				j++;
			}
		}
		else if (input.compare("EXIT") == 0)
		{
			return (0);
		}
		std::cout << "Phonebook : ";
		std::getline(std::cin, input);
	}
}