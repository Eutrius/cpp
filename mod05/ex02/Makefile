# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jyriarte <jyriarte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 16:42:22 by jyriarte          #+#    #+#              #
#    Updated: 2025/06/01 13:47:43 by jyriarte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = no
TITLE = No, you need form 28B, not 28C... 

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
INCLUDE = -I include
RM = rm -rf

OBJ_DIR = obj
SRC_DIR = src

SRC = src/main.cpp \
	  src/utils.cpp \
	  src/Bureaucrat.cpp \
	  src/AForm.cpp \
	  src/ShrubberyCreationForm.cpp \
	  src/RobotomyRequestForm.cpp \
	  src/PresidentialPardonForm.cpp \

OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
	IGN = .gitignore
	COMPILEDB = compile_commands.json

$(NAME): $(IGN) $(COMPILEDB) $(OBJ)
	@$(CC) -o $@ $(OBJ)
	@printf "\n\033[1A\033[K"
	@printf "\033[0;32m$(TITLE) compiled OK!\n"
	@printf "\033[0;37m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@printf "\033[0;37m Generating $(TITLE) objects... %-33.33s\r" $@
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(IGN): 	
	@printf "$(IGN)\n$(COMPILEDB)\n$(NAME)\n$(OBJ_DIR)\n.cache\n" > $(IGN)

$(COMPILEDB):
	@compiledb -n make --no-print-directory re

RULES = all clean fclean re run valgrind 

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)
	@printf "\033[0;31m$(TITLE) cleaned!\n"
	@printf "\033[0;37m"

fclean:
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@printf "\033[0;31m$(TITLE) removed!\n"
	@printf "\033[0;37m"

re: fclean all

run: $(NAME)
	@clear
	@./$(NAME) $(filter-out $(RULES), $(MAKECMDGOALS))

valgrind: $(NAME)
	@clear
	@valgrind ./$(NAME) $(filter-out $(RULES), $(MAKECMDGOALS))

%:
	@true

.PHONY: $(RULES)
