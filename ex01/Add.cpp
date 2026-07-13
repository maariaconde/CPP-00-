#include "PhoneBook.hpp"

void PhoneBook::addDarkestSecret(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setDarkestSecret(contact);
}

void PhoneBook::addPhoneNumber(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setPhoneNumber(contact);
}

void PhoneBook::addNickname(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setNickname(contact);
}

void PhoneBook::addLastName(PhoneBook *phonebook, std::string contact)
{
   phonebook->_all_contact[phonebook->index].setlast_Name(contact);
}

void PhoneBook::addFirstName(PhoneBook *phonebook, std::string contact)
{
   if(phonebook->index == 7)
   {
      phonebook->flag = true;
      phonebook->index = -1;
   }
   phonebook->index++;
   phonebook->_all_contact[phonebook->index].setFirstName(contact);
}
