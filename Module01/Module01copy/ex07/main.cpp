/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:18:06 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/09/02 12:57:39 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string			str;
    std::string			strnew;

    if (argc != 4)
    {
        std::cout << "wrong amount of arguments" << std::endl;
        return (0);
    }
    std::string         s1 = argv[2];
    std::string         s2 = argv[3];
	std::ifstream 		ifs(argv[1]);
	std::string			r = ".replacement";
	std::string			newname = argv[1] + r;

  	if (!ifs.is_open())
	{
        std::cout << "File not there" << std::endl;
        return (-1);
    }
    std::ofstream ofs(newname);
    if (!ofs.is_open())
	{
        std::cout << "New file cannot open" << std::endl;
        return (-1);
    }
    while(getline(ifs,str)) // all lines
    {
        strnew.append(str);
        if (!ifs.eof())
            strnew.append("\n");
    }
    int i = 0;
    size_t k = 0;
    while ((k = strnew.find(s1, i)) != std::string::npos)
    {
        strnew.replace(k, s1.length(), s2);
        i = k + s2.length();
    }
    ofs << strnew;
    ifs.close();
	ofs.close();
    return (1);
}
