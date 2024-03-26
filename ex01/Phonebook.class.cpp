/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:07 by ogregoir          #+#    #+#             */
/*   Updated: 2024/03/25 11:34:33 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.class.hpp"

Phonebook::Phonebook( void ) {
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Phonebook::~Phonebook( void ) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}