/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:13:56 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 00:51:31 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"
#include <string>
#include <iomanip>

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

class PhoneBook
{
    public:
        int index;
        bool flag;
        Contact _all_contact[8];
        void Search(PhoneBook *phonebook, std::string line);
        void add(PhoneBook *phonebook, std::string line);
        //Add.cpp
        void addDarkestSecret(PhoneBook *phonebook, std::string contact);
        void addPhoneNumber(PhoneBook *phonebook, std::string contact);
        void addNickname(PhoneBook *phonebook, std::string contact);
        void addLastName(PhoneBook *phonebook, std::string contact);
        void addFirstName(PhoneBook *phonebook, std::string contact);
        //CheckApp.cpp
        bool CheckNumber(std::string &line);
        void CheckPhoneNumber(std::string &line);
        bool CheckLetters(std::string &line);
        void CheckName(std::string &line);
        void CheckEmpty(std::string &line);
        //CheckShearch.cpp
        void CheckContact(PhoneBook *phonebook, std::string line);
        std::string FormatColumn(std::string contact);
};

#endif