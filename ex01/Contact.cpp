/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 21:29:42 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/14 01:09:55 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string n)
{
    _first_name = n;
}

void Contact::setlast_Name(std::string surname)
{
    _last_name = surname;
}

void Contact::setNickname(std::string nick)
{
    _nickname = nick;
}

void Contact::setPhoneNumber(std::string number)
{
    _phone_number = number;
}

void Contact::setDarkestSecret(std::string secret)
{
    _darkest_secret = secret;
}

std::string Contact::getFirstName()
{
    return(_first_name);
}

std::string Contact::getlast_Name()
{
    return(_last_name);
}

std::string Contact::getNickname()
{
    return(_nickname);
}

std::string Contact::getPhoneNumber()
{
    return(_phone_number);
}

std::string Contact::getDarkestSecret()
{
    return(_darkest_secret);
}
