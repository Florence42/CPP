# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/14 12:26:41 by frivaton          #+#    #+#              #
#    Updated: 2019/03/19 12:25:54 by frivaton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program.
NAME     := nicephonebook

# Sources and objects.
SRCS     := Phonebook.class.cpp \
			main.cpp
HDRS     := Phonebook.class.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LDFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean all
