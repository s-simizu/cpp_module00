/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:21:46 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/08 23:33:09 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook() : size(0), old(0) {};
    void add(Contact contact);
    void print_list();
    void print_contact(int index);
    int get_size() const;

private:
    static const int MAX_SIZE = 2;
    static const int COLUMN_SIZE = 10;
    Contact contacts[MAX_SIZE];
    int size;
    int old;
    void print_summary(Contact contact);
    void print_column(const std::string &column);
};

#endif
