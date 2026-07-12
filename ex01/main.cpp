/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:40:50 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/13 01:15:31 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void addDarkestSecret(PhoneBook *phonebook, std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   phonebook->_all_contact[phonebook->index].setDarkestSecret(contact);
}

void addPhoneNumber(PhoneBook *phonebook, std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   phonebook->_all_contact[phonebook->index].setPhoneNumber(contact);
}
void addNickname(PhoneBook *phonebook, std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   phonebook->_all_contact[phonebook->index].setNickname(contact);
}
void addLastName(PhoneBook *phonebook, std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   phonebook->_all_contact[phonebook->index].setlast_Name(contact);
}

void addFirstName(PhoneBook *phonebook, std::string contact)
{
   if(phonebook->index == 8)
      phonebook->index = -1;
   phonebook->index++;
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   phonebook->_all_contact[phonebook->index].setFirstName(contact);
}
void add(PhoneBook *phonebook, std::string line)
{
   std::cout << "First name:" << std::endl;
   std::getline(std::cin, line);
   addFirstName(phonebook, line);
   std::cout << "Last name:" << std::endl;
   std::getline(std::cin, line);
   addLastName(phonebook, line);
   std::cout << "Nickname:" << std::endl;
   std::getline(std::cin, line);
   addNickname(phonebook, line);
   std::cout << "Phonenumber:" << std::endl;
   std::getline(std::cin, line);
   addPhoneNumber(phonebook, line);
   std::cout << "Darkest secret:" << std::endl;
   std::getline(std::cin, line);
   addDarkestSecret(phonebook, line);
}

void Search(PhoneBook *phonebook)
{
   int i;
   i = 0;
   if(phonebook->index == -1)
   {
      std::cout << "There are no contacts" << std::endl;
      return;
   }
   std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
   while(i <= phonebook->index)
   {
      std::cout << std::right << std::setw(10) << i << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getFirstName() << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getlast_Name() << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getNickname() << std::endl;
      i++;
   }
      
}
int main(int argc, char **argv)
{
   std::string line;
   PhoneBook phonebook;

   phonebook.index = -1;

   if(argc < 1 || !argv)
   {
      std::cout << "Error" << std::endl << "Invalid argument" << std::endl;
      return(0);
   }
   //std:cin --> es lo que el programa lee del teclado 
   while(std::getline(std::cin, line))
   {
      if(line == "ADD")
         add(&phonebook, line);
      else if(line == "SEARCH")
         Search(&phonebook);
      else if(line == "EXIT")
         return(0);
   }
}