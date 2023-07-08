/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:22:26 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/08 23:45:47 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
public:
	Contact() {}
	Contact(std::string fn, std::string ln, std::string nn,
			std::string pn, std::string ds)
		: first_name(fn), last_name(ln), nick_name(nn), phone_number(pn),
		  darkest_secret(ds) {}
	const std::string &get_first_name() const;
	const std::string &get_last_name() const;
	const std::string &get_nick_name() const;
	const std::string &get_phone_number() const;
	const std::string &get_darkest_secret() const;

private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
