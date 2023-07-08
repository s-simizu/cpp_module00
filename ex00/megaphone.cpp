/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:38:36 by sshimizu          #+#    #+#             */
/*   Updated: 2023/07/06 18:15:55 by sshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

char *uppercase(char *str) {
    size_t len = strlen(str);
    for (int i = 0; i < len; i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main(int argc, char **argv) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++) {
        std::cout << uppercase(argv[i]);
    }
    std::cout << std::endl;
}
