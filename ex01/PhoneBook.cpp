/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:10:34 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/13 21:47:12 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * Tareas:
 * - En search pedir ínidice y printear toda la info de ese índice.
 * - En search cuando soliciten un contacto que no existe, regularlo.
 * - No permitir contactos vacíos en el ADD.
 * - No permitir que en los números pongan letras
 * - No permitir que en los nombres pongan números.
 */
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

void PhoneBook::add(PhoneBook *phonebook, std::string line)
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

void PrintContact(PhoneBook *phonebook, std::string line)
{
   int num;
   num = std::atoi(line.c_str());
   
   std::cout << "First Name: " << phonebook->_all_contact[num].getFirstName() << std::endl;
   std::cout << "Last name: " << phonebook->_all_contact[num].getlast_Name() << std::endl;
   std::cout << "Nickname: " << phonebook->_all_contact[num].getNickname() << std::endl;
   std::cout << "Phonenumber: " << phonebook->_all_contact[num].getPhoneNumber() << std::endl;
   std::cout << "Darkest secret: " << phonebook->_all_contact[num].getDarkestSecret() << std::endl;
   
}

void CheckContact(PhoneBook *phonebook, std::string line)
{
   int num;
   num = std::atoi(line.c_str());
   while(line.length() > 1 || !std::isdigit(line[0]) || num > phonebook->index)
   {
      std::cout << "Invalid. Select the contact:" << std::endl;
      std::getline(std::cin, line);
      num = std::atoi(line.c_str());
   }
   PrintContact(phonebook, line);
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
   while(i <= phonebook->index)
   {
      std::cout << std::right << std::setw(10) << i << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getFirstName() << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getlast_Name() << "|";
      std::cout << std::right << std::setw(10) << phonebook->_all_contact[i].getNickname() << std::endl;
      i++;
   }
   while(1)
   {
      
      std::cout << "Select the contact:" << std::endl;
      std::getline(std::cin, line);
      if(!line.empty())
         break;
   }
      CheckContact(phonebook, line);
      
}
