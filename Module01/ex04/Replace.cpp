/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:17:18 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 17:52:23 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string  s2) : filename(filename), s1(s1), s2(s2) 
{
}

Replace::~Replace()
{
}

int Replace::replace(void)
{
    std::ifstream   ifile(filename);
    std::string     line;
    std::string     buffer;
    int             pos;

    if (ifile.is_open())
    {
        while (std::getline(ifile, line))
        {
            buffer.append(line);
            pos = buffer.find(s1);
            if (pos != -1)
            {
                buffer.erase(pos, s1.length());
                buffer.insert(pos, s2);
            }
            if (!ifile.eof())
                buffer.append("\n");
        }
        ifile.close();
        std::ofstream   ofile(filename.append(".replace"));
        if (ofile.is_open())
        {
            ofile << buffer;
            ofile.close();
        }
        else
            return (std::cout << "Couldn't open the output file ... !", EXIT_FAILURE);
    }
    else
        return (std::cout << "Coldn't open the input file ... !", EXIT_FAILURE);
    return (EXIT_SUCCESS);
}