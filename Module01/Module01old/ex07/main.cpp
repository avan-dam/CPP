/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:18:06 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/08/28 11:49:28 by Amber         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string			str;
    std::string			strnew;
    std::string         s1 = argv[2];
    std::string         s2 = argv[3];
	std::ifstream 		ifs(argv[1]);
	std::string			r = ".replacement";
	std::string			newname = argv[1] + r;

    if (argc != 4)
    {
        std::cout << "wrong amount of arguments" << std::endl;
        return (0);
    }
    std::ofstream ofs(newname);
  	if (!ofs.is_open() || !ifs.is_open())
	{
        std::cout << "File not there" << std::endl;
        return (-1);
    }
	while(!ifs.eof()) // all lines
    {
	    getline(ifs,str); // save line in str.
        // FAILURE
        int i = 0;
        while (str.find((argv[2]), i) != std::string::npos)
        {
            str.replace(str.find(argv[2]), s1.length(), argv[3]);
            i = i + s2.length();
        }
        if (!ifs.eof())
            ofs << str << std::endl;
        else
            ofs << str;
    }
    ifs.close();
	ofs.close();
    return (1);
}
