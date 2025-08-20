/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebooh.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:27:07 by kevwang           #+#    #+#             */
/*   Updated: 2025/08/20 13:27:07 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <limits>

int ft_strlen(std::string str);
int ft_strncmp(std::string input, std::string cmd, int size);
int ft_is_space(std::string str);

# include "MyContact.hpp"
# include "PhoneBook.hpp"

#endif