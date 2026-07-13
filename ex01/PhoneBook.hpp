/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:13:56 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 01:21:28 by mconde-s         ###   ########.fr       */
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
    private:
        int index;
        bool flag;
        Contact _all_contact[8];

        // Add.cpp
        void addDarkestSecret(PhoneBook *phonebook, std::string contact);
        void addPhoneNumber(PhoneBook *phonebook, std::string contact);
        void addNickname(PhoneBook *phonebook, std::string contact);
        void addLastName(PhoneBook *phonebook, std::string contact);
        void addFirstName(PhoneBook *phonebook, std::string contact);

        // CheckAdd.cpp
        bool CheckNumber(std::string &line);
        void CheckPhoneNumber(std::string &line);
        bool CheckLetters(std::string &line);
        void CheckName(std::string &line);
        void CheckEmpty(std::string &line);

        // CheckSearch.cpp
        void CheckContact(PhoneBook *phonebook, std::string line);
        std::string FormatColumn(std::string contact);
        void PrintContact(std::string line);

    public:
        PhoneBook();
        void Search(PhoneBook *phonebook, std::string line);
        void add(PhoneBook *phonebook, std::string line);
};

#endif