/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:10:34 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 01:09:24 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(PhoneBook *phonebook, std::string line)
{
   std::cout << "First name:" << std::endl;
   std::getline(std::cin, line);
   CheckName(line);
   addFirstName(phonebook, line);
   std::cout << "Last name:" << std::endl;
   std::getline(std::cin, line);
   CheckName(line);
   addLastName(phonebook, line);
   std::cout << "Nickname:" << std::endl;
   std::getline(std::cin, line);
   CheckEmpty(line);
   addNickname(phonebook, line);
   std::cout << "Phonenumber:" << std::endl;
   std::getline(std::cin, line);
   CheckPhoneNumber(line);
   addPhoneNumber(phonebook, line);
   std::cout << "Darkest secret:" << std::endl;
   std::getline(std::cin, line);
   CheckEmpty(line);
   addDarkestSecret(phonebook, line);
}

void PhoneBook::Search(PhoneBook *phonebook, std::string line)
{
   int i;
   std::string temp;
   i = 0;
   if(phonebook->index == -1)
   {
      std::cout << "There are no contacts" << std::endl;
      return;
   }
   std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
   while(i <= phonebook->index || (phonebook->flag == true && i < 8))
   {
      std::cout << std::right << std::setw(10) << i << "|";
      std::cout << std::right << std::setw(10) << FormatColumn(phonebook->_all_contact[i].getFirstName()) << "|";
      std::cout << std::right << std::setw(10) << FormatColumn(phonebook->_all_contact[i].getlast_Name()) << "|";
      std::cout << std::right << std::setw(10) << FormatColumn(phonebook->_all_contact[i].getNickname()) << std::endl;
      i++;
   }
   while(1)
   {
      std::cout << "Select the contact:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      if(!line.empty())
         break;
   }
   CheckContact(phonebook, line);
}
