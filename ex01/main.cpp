/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:36:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/03/27 00:03:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

int main(void) 
{
	
	Phonebook   	repertoire;
	std::string 	input;
	int				i;
	
	input = "";
	i = 0;
	std::cout << "Phonebook : ";
	std::getline(std::cin, input);
	while (input.compare("EXIT") != 0)
	{	
		if (input.compare("ADD") == 0)
			i = ft_add(repertoire, i);
		else if (input.compare("SEARCH") == 0)
			ft_search(repertoire, input);
		std::cout << "Phonebook : ";
		std::getline(std::cin, input);
	}
	return (0);
}