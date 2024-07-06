/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:19:09 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/06 16:43:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class Phonebook {

public :
    Phonebook( void );
    Contact     contact[8];
    ~Phonebook( void );
};

int	    ft_add(Phonebook &repertoire, int i);
void	ft_search(Phonebook &repertoire, std::string input);
