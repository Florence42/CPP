# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frivaton <frivaton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/20 17:18:11 by frivaton          #+#    #+#              #
#    Updated: 2019/03/20 17:31:05 by frivaton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= replace

# directories
SRC_DIR		:= ./src
OBJ_DIR		:= ./obj

# src / obj files
SRC			:=	main.cpp

OBJ			:= $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

# compiler
CXX			:= clang++
CXXFLAGS	:= -Wall -Wextra -Werror -pedantic -std=c++98
# CXXFLAGS	+= -O3 -march=native -pipe -flto

.PHONY: all clean fclean re

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
