/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:44:03 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 02:26:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "Phonebook.class.hpp"


int	Contact::get_index(){
	return index;
}
std::string	Contact::get_Fname(){
	return first_name;
}
std::string	Contact::get_Lname(){
	return last_name;
}
std::string	Contact::get_Nname(){
	return nickname;
}
std::string	Contact::get_number(){
	return phone_number;
}
std::string	Contact::get_ds(){
	return darkest_secret;
}

void	Contact::set_Fname(std::string name){
	this->first_name = name;
}
void	Contact::set_Lname(std::string name){
	this->last_name = name;
}
void	Contact::set_Nname(std::string name){
	this->nickname = name;
}
void	Contact::set_number(std::string number){
	this->phone_number = number;
}
void	Contact::set_ds(std::string ds){
	this->darkest_secret = ds;
}
void	Contact::set_index(int idx)
{
	this->index = idx;
}

bool	ft_isalpha(std::string check)
{
	size_t	i = 0;
	while(i != check.size())
	{
		if(!std::isalpha(check[i]))
			return false;
		i++;
	}
	return true;
}

void	verif_first_name(Phonebook &repertoire, int i, std::string check)
{
	while (check.empty())
	{
		std::cout << "The first name is required, please enter a first name" << std::endl;
		std::cout << "First name : "; 
		std::getline(std::cin, check);
	}
	while(!ft_isalpha(check))
	{
		std::cout << "The first name must contain only alphabetical characters" << std::endl;
		std::cout << "First name : "; 
		std::getline(std::cin, check);
	}
	repertoire.contact[i].set_Fname(check);
}

void	verif_last_name(Phonebook &repertoire, int i, std::string check)
{
	while (check.empty())
	{
		std::cout << "The last name is required, please enter a last name" << std::endl;
		std::cout << "Last name : ";
		std::getline(std::cin, check);
	}
	while(!ft_isalpha(check))
	{
		std::cout << "The last name must contain only alphabetical characters" << std::endl;
		std::cout << "Last name : ";
		std::getline(std::cin, check);
	}
	repertoire.contact[i].set_Lname(check);
}

void	verif_nickname(Phonebook &repertoire, int i, std::string check)
{
	while (check.empty())
	{
		std::cout << "The nickname is required, please enter a nickname" << std::endl;
		std::cout << "Nickname : ";
		std::getline(std::cin, check);
	}
	while(!ft_isalpha(check))
	{
		std::cout << "The nickname must contain only alphabetical characters" << std::endl;
		std::cout << "Nickname : ";
		std::getline(std::cin, check);
	}
	repertoire.contact[i].set_Nname(check);
	
}

void	verif_number(Phonebook &repertoire, int i, std::string check)
{
	size_t	j = 0;
	
	while(check[j])
	{
		if(!std::isdigit(check[j]))
			break;
		j++;
	}
	if (j != check.size())
	{
		std::cout << "The phone number must only contain numbers" << std::endl;
		std::cout << "Please enter a correct phone number :" << std::endl;
		std::getline(std::cin, check);
		verif_number(repertoire, i, check);
	}
	else
		repertoire.contact[i].set_number(check);;
}

void	verif_string(Contact &contact)
{
	if (contact.get_number().empty())
		contact.set_number("/");
	if (contact.get_ds().empty())
		contact.set_ds("/");
}

int	ft_add(Phonebook &repertoire, int i)
{
	std::string temp;
	
	if (i < 8)
	{
		std::cout << "First name : ";
		std::getline(std::cin, temp);
		verif_first_name(repertoire, i, temp);
		std::cout << "Last name : ";
		std::getline(std::cin, temp);
		verif_last_name(repertoire, i, temp);
		std::cout << "Nickname : ";
		std::getline(std::cin, temp);
		verif_nickname(repertoire, i, temp);
		std::cout << "Phone number : ";
		std::getline(std::cin, temp);
		verif_number(repertoire, i, temp);
		std::cout << "Darkest secret : ";
		std::getline(std::cin, temp);
		repertoire.contact[i].set_ds(temp);
		verif_string(repertoire.contact[i]);
		i++;
	}
	else
	{
		std::cout << "First name : ";
		std::getline(std::cin, temp);
		verif_first_name(repertoire, 7, temp);
		std::cout << "Last name : ";
		std::getline(std::cin, temp);
		verif_last_name(repertoire, 7, temp);
		std::cout << "Nickname : ";
		std::getline(std::cin, temp);
		verif_nickname(repertoire, 7, temp);
		std::cout << "Phone number : ";
		std::getline(std::cin, temp);
		verif_number(repertoire, 7, temp);
		std::cout << "Darkest secret : ";
		std::getline(std::cin, temp);
		repertoire.contact[7].set_ds(temp);
		verif_string(repertoire.contact[7]);
	}
	return (i);
}