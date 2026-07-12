/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:40:50 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/12 19:53:40 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void addDarkestSecret(PhoneBook phonebook, std::string contact)
{
   std::string print;
   phonebook._all_contact[phonebook.index].setDarkestSecret(contact);
   print = phonebook._all_contact[phonebook.index].getDarkestSecret();
    std::cout << print << std::endl;
    
}

void addPhoneNumber(PhoneBook phonebook, std::string contact)
{
   phonebook._all_contact[phonebook.index].setPhoneNumber(contact);
}
void addNickname(PhoneBook phonebook, std::string contact)
{
   phonebook._all_contact[phonebook.index].setNickname(contact);
}
void addLastName(PhoneBook phonebook, std::string contact)
{
   phonebook._all_contact[phonebook.index].setlast_Name(contact);
}
void addFirstName(PhoneBook phonebook, std::string contact)
{
   phonebook.index++;
   phonebook._all_contact[phonebook.index].setFirstName(contact);
}
void add(PhoneBook phonebook, std::string line)
{
   std::cout << "First name:" << std::endl;
   std::getline(std::cin, line);
   addFirstName(phonebook, line);
   std::cout << "Last name:" << std::endl;
   addLastName(phonebook, line);
   std::getline(std::cin, line);
   std::cout << "Nickname:" << std::endl;
   addNickname(phonebook, line);
   std::getline(std::cin, line);
   std::cout << "Phonenumber:" << std::endl;
   std::getline(std::cin, line);
   addPhoneNumber(phonebook, line);
   std::cout << "Darkest secret:" << std::endl;
   std::getline(std::cin, line);
   addDarkestSecret(phonebook, line);

   
}
int main(int argc, char **argv)
{
   std::string line;
   PhoneBook phonebook;

   phonebook.index = 0;
   int flag = 0;

   if(argc < 1 || !argv)
   {
      std::cout << "Error" << std::endl << "Invalid argument" << std::endl;
      return(0);
   }
   //std:cin --> es lo que el programa lee del teclado 
   while(std::getline(std::cin, line))
   {
      if(line == "ADD" || flag == 1)
      {
         std::cout << line << std::endl;
         add(phonebook, line);
      }
      else if(line == "SEARCH")
         std::cout << "BUENAS TARDES" << std::endl;
      else if(line == "EXIT")
         std::cout << "KLK" << std::endl;
   }
}