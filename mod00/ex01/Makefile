NAME = phonebook
TITLE = Phonebook

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98 
INCLUDE = -I include
RM = rm -rf

OBJ_DIR = obj
SRC_DIR = src

SRC = src/main.cpp \
	  src/contact.cpp \
	  src/phonebook.cpp \

OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@printf "\n\033[1A\033[K"
	@printf "\033[0;32m$(TITLE) compiled OK!\n"
	@printf "\033[0;37m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@printf "\033[0;37m Generating $(TITLE) objects... %-33.33s\r" $@
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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

.PHONY: all clean fclean re

