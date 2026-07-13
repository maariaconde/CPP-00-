/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:40:50 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 01:09:18 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
   std::string line;
   PhoneBook phonebook;

   phonebook.index = -1;
   phonebook.flag = false;
   if(argc < 1 || !argv)
   {
      std::cout << "Error" << std::endl << "Invalid argument" << std::endl;
      return(0);
   }
   while(1)
   {
      if(!std::getline(std::cin, line))
         exit(1);
      if(line == "ADD")
         phonebook.add(&phonebook, line);
      else if(line == "SEARCH")
         phonebook.Search(&phonebook, line);
      else if(line == "EXIT")
         return(0);
   }
}
