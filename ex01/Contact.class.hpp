/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:42:03 by ogregoir          #+#    #+#             */
/*   Updated: 2024/04/19 15:05:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>
#pragma once

class Contact {

public :

	int             index;
	std::string     first_name;
	std::string     last_name;
	std::string     nickname;
	std::string     phone_number;
	std::string     darkest_secret;
	Contact( void );
	~Contact( void );
};

#endif