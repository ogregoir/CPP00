/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:44:03 by ogregoir          #+#    #+#             */
/*   Updated: 2024/03/27 00:05:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"

Contact::Contact( void ) {
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact( void ) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}

void	verif_string(Phonebook &repertoire, int i)
{
	if (repertoire.contact[i - 1].first_name.size() == 0)
		repertoire.contact[i - 1].first_name = "/";
	if (repertoire.contact[i - 1].last_name.size() == 0)
		repertoire.contact[i - 1].last_name = "/";
	if (repertoire.contact[i - 1].nickname.size() == 0)
		repertoire.contact[i - 1].nickname = "/";
	if (repertoire.contact[i - 1].phone_number.size() == 0)
		repertoire.contact[i - 1].phone_number = "/";
	if (repertoire.contact[i - 1].darkest_secret.size() == 0)
		repertoire.contact[i - 1].darkest_secret = "/";
}

int	ft_add(Phonebook &repertoire, int i)
{
	if (i < 8)
	{
		std::cout << "First name : ";
		std::getline(std::cin, repertoire.contact[i].first_name);
		std::cout << "Last name : ";
		std::getline(std::cin, repertoire.contact[i].last_name);
		std::cout << "Nickname : ";
		std::getline(std::cin, repertoire.contact[i].nickname);
		std::cout << "Phone number : ";
		std::getline(std::cin, repertoire.contact[i].phone_number);
		std::cout << "Darkest secret : ";
		std::getline(std::cin, repertoire.contact[i].darkest_secret);
		i++;
	}
	else
	{
		std::cout << "First name : ";
		std::getline(std::cin, repertoire.contact[7].first_name);
		std::cout << "Last name : ";
		std::getline(std::cin, repertoire.contact[7].last_name);
		std::cout << "Nickname : ";
		std::getline(std::cin, repertoire.contact[7].nickname);
		std::cout << "Phone number : ";
		std::getline(std::cin, repertoire.contact[7].phone_number);
		std::cout << "Darkest secret : ";
		std::getline(std::cin, repertoire.contact[7].darkest_secret);
	}
	verif_string(repertoire, i);
	return (i);
}