/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:57:03 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/08 23:33:16 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

void PhoneBook::add(Contact contact)
{
    contacts[old] = contact;
    old = (old + 1) % MAX_SIZE;
    if (size < MAX_SIZE)
    {
        size++;
    }
}

void PhoneBook::print_list()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << std::setw(COLUMN_SIZE) << i;
        print_summary(contacts[i]);
    }
}

void PhoneBook::print_contact(int index)
{
    std::cout << contacts[index].get_first_name() << std::endl
              << contacts[index].get_last_name() << std::endl
              << contacts[index].get_nick_name() << std::endl
              << contacts[index].get_phone_number() << std::endl
              << contacts[index].get_darkest_secret() << std::endl;
}

void PhoneBook::print_summary(Contact contact)
{
    std::cout << '|';
    print_column(contact.get_first_name());
    std::cout << '|';
    print_column(contact.get_last_name());
    std::cout << '|';
    print_column(contact.get_nick_name());
    std::cout << std::endl;
}

void PhoneBook::print_column(const std::string &column)
{
    std::cout << std::setw(COLUMN_SIZE);
    if (column.size() <= COLUMN_SIZE)
    {
        std::cout << column;
    }
    else
    {
        std::cout << column.substr(0, COLUMN_SIZE - 1) + '.';
    }
}

int PhoneBook::get_size() const
{
    return size;
}
