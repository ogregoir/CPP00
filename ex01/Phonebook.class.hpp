/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:19:09 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/13 02:00:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cstring>

class Phonebook {

public :
    Contact     contact[8];
};

int	    ft_add(Phonebook &repertoire, int i);
void	ft_search(Phonebook &repertoire, std::string input);
void	ft_index2(Phonebook &repertoire, std::string input);

