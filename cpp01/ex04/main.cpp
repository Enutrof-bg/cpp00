/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:19:35 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 14:19:35 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char **argv)
{
	std::string filename;
	std::string filenamereplace;
	std::ifstream input;
	std::ofstream output;
	std::string allText;
	char c;

	if (argc != 4)
		return (0);
	filename = argv[1];
	filenamereplace = filename + ".replace";

	// std::cout << filename << std::endl;
	// std::cout << filenamereplace << std::endl;

	input.open(filename.c_str());
	if (!input)
	{
		std::cerr << "Can't open file" << std::endl;
		exit(1);
	}
	output.open(filenamereplace.c_str());
	if (!output)
	{
		std::cerr << "Can't open file" << std::endl;
		exit(1);
	}

	while (input.get(c))
	{
		allText += c;
	}
	
	std::string toFind = argv[2];
	std::string toReplace = argv[3];
	std::string result;
	unsigned int compteur = 0;
	for (unsigned int i = 0; i < allText.length(); i++)
	{
		if (toFind.length() > 0)
		{
			for (unsigned int j = 0; j < toFind.length(); j++)
			{
				if (allText[i + j] == toFind[j])
					compteur++;
			}
			if (compteur == toFind.length())
			{
				result = result + toReplace;
				i = i + toFind.length() - 1;
			}
			else
			{
				result = result + allText[i];
			}
			compteur = 0;
		}
	}
	allText = result;
	output << allText;
	// std::cout << allText << std::endl;
	input.close();
	output.close();
}
