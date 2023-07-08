# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshimizu <sshimizu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 18:11:01 by sshimizu          #+#    #+#              #
#    Updated: 2023/07/06 18:15:41 by sshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

all: $(NAME)

$(NAME): megaphone.cpp
	c++ -std=c++98 $^ -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
