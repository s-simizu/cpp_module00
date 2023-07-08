/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:33:14 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/09 00:27:10 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

void add_contact(PhoneBook &pb)
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "first name    : ";
    std::cin >> first_name;
    std::cout << "last name     : ";
    std::cin >> last_name;
    std::cout << "nick name     : ";
    std::cin >> nick_name;
    std::cout << "phone number  : ";
    std::cin >> phone_number;
    std::cout << "darkest secret: ";
    std::cin >> darkest_secret;
    pb.add(Contact(first_name, last_name, nick_name, phone_number, darkest_secret));
}

void search_contact(PhoneBook &pb)
{
    int index;

    if (pb.get_size() == 0)
    {
        std::cout << "Enpty Phonebook" << std::endl;
        return;
    }
    pb.print_list();
    std::cout << "Index to display: ";
    std::cin >> index;
    if (!std::cin)
    {
        std::string input;
        
        std::cin.clear();
        std::cin >> input;
        std::cout << "Invalid index: " << input << std::endl;
        return;
    }
    if (index >= pb.get_size())
    {
        std::cout << "Invalid index: " << index << std::endl;
        return;
    }
    pb.print_contact(index);
}

int main(void)
{
    PhoneBook pb;
    std::string command;

    while (std::cin)
    {
        std::cout << "COMMAND: ";
        std::cin >> command;
        if (command == "ADD")
        {
            add_contact(pb);
        }
        else if (command == "SEARCH")
        {
            search_contact(pb);
        }
        else if (command == "EXIT")
        {
            return 0;
        }
        else
        {
            std::cout << "Invalid COMMAND: " << command << std::endl;
        }
    }
}
