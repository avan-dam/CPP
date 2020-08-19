/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-dam <avan-dam@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 16:44:46 by avan-dam      #+#    #+#                 */
/*   Updated: 2020/07/28 14:52:17 by avan-dam      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

void	add(phonebook &contact) {
	std::string buff;
	std::cout << "please enter first name" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 1);
	std::cout << "please enter last name" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 2);
	std::cout << "please enter nickname" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 3);
	std::cout << "please enter login" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 4);
	std::cout << "please enter postal address" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 5);
	std::cout << "please enter email address" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 6);
	std::cout << "please enter phone number" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 7);
	std::cout << "please enter birthday date" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 8);
	std::cout << "please enter favourite meal" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 9);
	std::cout << "please enter underwear color" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 10);
	std::cout << "please enter darkest secret" << std::endl;
	std::getline(std::cin, buff);
	contact.setcontact(buff, 11);
	std::cout << "Please tell the phonebook if you would like to ADD, SEARCH or EXIT"<< std::endl;
	return;

}

void	search(phonebook &contact, int i) {
	if (i > 0)
		std::cout << std::endl;
	std::string temp (contact.getInfo(1));
	std::cout << "" << i<< std::setw(10);
	std::cout << "|";
	if (temp.size() > 10)
	{
		std::cout << "" << temp.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << "" << contact.getInfo(1) << std::setw(10);
	std::cout << "|";
	temp = (contact.getInfo(2));
	if (temp.size() > 10)
	{
		std::cout << "" << temp.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << "" << contact.getInfo(2) << std::setw(10);
	std::cout << "|";
	temp = (contact.getInfo(3));
	if (temp.size() > 3)
	{
		std::cout << "" << temp.substr(0, 9);
		std::cout << ".";
	}
	else
		std::cout << "" << contact.getInfo(3) << std::setw(10);
	// std::cout << std::endl;
	return;
}

int main(void) {
    phonebook	contact[7];
	int			nbContact;
	std::string buff;
	nbContact = 0;
	std::cout << "Please tell the phonebook if you would like to ADD, SEARCH or EXIT"<< std::endl;
	std::getline(std::cin, buff);    
    while (int i = 1)
    {
        std::string str1 ("SEARCH");
        std::string str2 ("ADD");
    	std::string str3 ("EXIT");

    	if (str1.compare(buff) == 0)
		{
			if (nbContact == 0)
				std::cout << "Your phonebook is empty" << std::endl;
			else
			{
				for (int j=0; j < nbContact; j++)
					search(contact[j], j);
			}
			std::cout << "Please enter an index number for the contact you wish to viw more infomation"<< std::endl;
			std::getline(std::cin, buff);
			if (buff >= "0" && buff <= "7")
			{
				//NO if the numb counts
				std::cout << "In here"<< std::endl;
			}
			else
				std::cout << "Valid search for contact not inputted. Please tell the phonebook if you would like to ADD, SEARCH or EXIT"<< std::endl;
		}
		else if (str2.compare(buff) == 0)
		{
			if (nbContact > 7)
				std::cout << "Your phonebook is full" << std::endl;
			else
			{
				add(contact[nbContact]);
				nbContact++;
			}
		}    	
		else if (str3.compare(buff) == 0)
    	{
	    	std::cout << "you entered EXIT" << std::endl;
        	return 0;
    	}
    	else
        	std::cout << "phonebook only accepts input SEARCH, ADD or EXIT please enter one of these" << std::endl;
		std::getline(std::cin, buff);
    }
}