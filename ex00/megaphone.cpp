#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>

int ft_strlen(char **argv)
{
	int len;
	int	i;

	i = 1;
	len = 0;
	while(argv[i])
	{
		len += std::strlen(argv[i]);
		i++;
	}
	return(len);
}
int main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 1;
	k = 0;
	if(argc == 1)
	{
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
		return (0);
	}
	str = new char[ft_strlen(argv) + 1];
	while(argv[j])
	{
		i = 0;
		while(argv[j][i])
		{
			if (std::islower(argv[j][i]))
				str[k] = std::toupper(argv[j][i]);
			else
				str[k] = argv[j][i];
			i++;
			k++;
		}
		j++;
	}
	str[k] = '\0';
	std::cout << str << std::endl;
	delete[] str;
	return (0);
}