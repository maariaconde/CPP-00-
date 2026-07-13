
#include  "PhoneBook.hpp"

std::string PhoneBook::FormatColumn(std::string contact)
{
   if (contact.length() > 10)
   {
      contact.resize(10);
      contact[9] = '.';
   }
   return(contact);
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

void PhoneBook::CheckContact(PhoneBook *phonebook, std::string line)
{
   int num;
   num = std::atoi(line.c_str());
   while(line.length() > 1 || !std::isdigit(line[0]) || num > phonebook->index || num < 0)
   {
      if((num < 8 && num >= 0) && phonebook->flag == true && line.length() == 1 && std::isdigit(line[0]))
         break;
      std::cout << "Invalid Input. Select the contact:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
      num = std::atoi(line.c_str());
   }
   PrintContact(phonebook, line);
}
