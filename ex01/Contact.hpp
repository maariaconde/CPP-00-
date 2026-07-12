/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:29:17 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/12 19:52:20 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>  
#include <cstdlib>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>


class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        void setFirstName(std::string n);
        void setlast_Name(std::string surname);
        void setNickname(std::string nick);
        void setPhoneNumber(std::string number);
        void setDarkestSecret(std::string secret);

        std::string getFirstName();
        std::string getlast_Name();
        std::string getNickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
};

#endif