/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:42:03 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/10 22:30:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact {

private :
	int             index;
	std::string     first_name;
	std::string     last_name;
	std::string     nickname;
	std::string     phone_number;
	std::string     darkest_secret;
public :
	int				get_index();
	std::string		get_Fname();
	std::string		get_Lname();
	std::string		get_Nname();
	std::string 	get_number();
	std::string		get_ds();
	void			set_Fname(std::string Fname);
	void			set_Lname(std::string Lname);
	void			set_Nname(std::string Nname);
	void			set_number(std::string number);
	void			set_ds(std::string ds);
	void			set_index(int idx);

};
