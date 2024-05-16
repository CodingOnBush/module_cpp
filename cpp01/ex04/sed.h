/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momrane <momrane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:14:03 by momrane           #+#    #+#             */
/*   Updated: 2024/05/16 10:22:28 by momrane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

# include <iostream>
# include <string>
# include <fstream>
# include "colors.h"

std::string	replace(std::string line, std::string s1, std::string s2);
int			sed(std::string filename, std::string s1, std::string s2, std::string outfile);

#endif