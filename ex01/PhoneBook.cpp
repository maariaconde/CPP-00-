/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:10:34 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 00:18:13 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void addDarkestSecret(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setDarkestSecret(contact);
}

void addPhoneNumber(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setPhoneNumber(contact);
}

void addNickname(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setNickname(contact);
}

void addLastName(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setlast_Name(contact);
}

void addFirstName(PhoneBook *phonebook, std::string contact)
{
   if(phonebook->index == 7)
   {
      phonebook->flag = true;
      phonebook->index = -1;
   }
   phonebook->_all_contact[phonebook->index].setFirstName(contact);
}
void CheckEmpty(std::string &line)
{
   while(line.empty())
   {
      std::cout << "Invalid. Please enter a value:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
   }
}
bool CheckNumber(std::string &line)
{
   int i = 0;

   while(line[i])
   {
      if(!std::isdigit(line[i]))
         return(false);
      i++;
   }
   return(true);
}

void CheckPhoneNumber(std::string &line)
{
   CheckEmpty(line);
   while(CheckNumber(line) == false)
   {
      std::cout << "Invalid. Only numbers allowed" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
   }
}

bool CheckLetters(std::string &line)
{
   int i = 0;

   while(line[i])
   {
      if(std::isdigit(line[i]))
         return(false);
      i++;
   }
   return(true);
}

void CheckName(std::string &line)
{
   CheckEmpty(line);
   while(CheckLetters(line) == false)
   {
      std::cout << "Invalid. Only letters allowed" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
   }
}

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
   while(line.length() > 1 || !std::isdigit(line[0]) || num > phonebook->index || num < 0)
   {
      if((num < 8 && num >= 0) && phonebook->flag == true && line.length() == 1 && std::isdigit(line[0]))
         break;
      std::cout << "Invalid. Select the contact:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
      num = std::atoi(line.c_str());
   }
   PrintContact(phonebook, line);
}

std::string FormatColumn(std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   return(contact);
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
