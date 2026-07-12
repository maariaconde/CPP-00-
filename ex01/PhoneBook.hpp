/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 20:13:56 by mconde-s          #+#    #+#             */
/*   Updated: 2026/07/12 19:52:30 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>  
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
        Contact _all_contact[8];
};

#endif