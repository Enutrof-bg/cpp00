/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:59:17 by kevwang           #+#    #+#             */
/*   Updated: 2025/07/03 11:59:18 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int j;
	int n;
	
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	if (argc >= 2)
	{
		i = 0;
		j = 1;
		while (j < argc)
		{
			while (argv[j][i])
			{
				if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
					argv[j][i] = argv[j][i] - 32;
				i++;
			}
			i = 0;
			j++;
		}
		n = 1;
		while (n < argc)
		{
			std::cout << argv[n];
			n++;
		}
		std::cout << std::endl;
	}
	return 0;
}
