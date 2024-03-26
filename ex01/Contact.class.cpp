/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:44:03 by ogregoir          #+#    #+#             */
/*   Updated: 2024/03/25 11:44:39 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact( void ) {
    
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact( void ) {
    
    std::cout << "Destructor called" << std::endl;
    return;
}