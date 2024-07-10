/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:26:19 by ogregoir          #+#    #+#             */
/*   Updated: 2024/07/10 19:58:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>

int main(int argc, char **argv)
{
	int			i;
	int			j;
	std::string	str;

	i = 0;
	j = 1;
	if(argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	while(argv[j])
	{
		i = 0;
		while(argv[j][i])
		{
			if (std::islower(argv[j][i]))
				str += std::toupper(argv[j][i]);
			else
				str += argv[j][i];
			i++;
		}
		if(argv[j + 1])
			str += ' ';
		j++;
	}
	std::cout << str << std::endl;
	return (0);
}