/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:51:42 by mconde-s          #+#    #+#             */
/*   Updated: 2026/03/08 17:23:59 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>  
#include <cctype>

// cout = character output
// a partir del módulo 2 no se puede usar el namespace --> 

int main(int argc, char **argv)
{
    char c;
    
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for(int j = 1; argv[j]; j++)
    {
        for(int i = 0; argv[j][i]; i++)
        {
            c = toupper(argv[j][i]);
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return(0);
}