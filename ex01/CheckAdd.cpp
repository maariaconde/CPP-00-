
#include "PhoneBook.hpp"

bool PhoneBook::CheckNumber(std::string &line)
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

void PhoneBook::CheckPhoneNumber(std::string &line)
{
   CheckEmpty(line);
   while(CheckNumber(line) == false)
   {
      std::cout << "Invalid Input. Only numbers allowed. Please enter a value:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
   }
}

bool PhoneBook::CheckLetters(std::string &line)
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

void PhoneBook::CheckName(std::string &line)
{
   CheckEmpty(line);
   while(CheckLetters(line) == false)
   {
      std::cout << "Invalid Input. Only letters allowed. Please enter a value:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
      CheckEmpty(line);
   }
}

void PhoneBook::CheckEmpty(std::string &line)
{
   while(line.empty())
   {
      std::cout << "Invalid Input. Please enter a value:" << std::endl;
      if(!std::getline(std::cin, line))
         exit(1);
   }
}
