/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:40:50 by mconde-s          #+#    #+#             */
/*   Updated: 2026/04/05 21:20:55 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int checkLine(std::string input)
{
   std::string add = "ADD";
   std::string search = "SEARCH";
   std::string exit = "EXIT";

   if(input == add || input == search || input == exit)
      return (0);
   return(-1);
}

void addInfo(std::string contact)
{
   std::cout << "Escribe tu nombre:" << std::endl;
   
}

int main(int argc, char **argv)
{
   std::string line;

   if(argc < 1 || !argv)
      return(0);
   //std:cin --> es lo que el programa lee del teclado 
   while(1)
   {
      if(!std::getline(std::cin, line))
         return(0);
      if(checkLine(line) == 0)
      {
         if(line == "ADD")
            std::cout << "HOLA" << std::endl;
         if(line == "SEARCH")
            std::cout << "BUENAS TARDES" << std::endl;
         if(line == "EXIT")
            std::cout << "KLK" << std::endl;
      }
      
            
   }
    
}