/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 19:48:36 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/07 19:56:50 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

const std::string &Contact::get_first_name() const
{
    return first_name;
}

const std::string &Contact::get_last_name() const
{
    return last_name;
}

const std::string &Contact::get_nick_name() const
{
    return nick_name;
}

const std::string &Contact::get_phone_number() const
{
    return phone_number;
}

const std::string &Contact::get_darkest_secret() const
{
    return darkest_secret;
}
