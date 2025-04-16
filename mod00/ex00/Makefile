NAME = megaphone
TITLE = Megaphone

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98 
INCLUDE = -I include
RM = rm -rf

OBJ_DIR = obj
SRC_DIR = src

SRC = src/megaphone.cpp \
	  src/Megaphone.cpp

OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)



$(NAME): $(OBJ)
	@$(CC) -o $@ $^
	@printf "\n\033[1A\033[K"
	@printf "\033[0;32m$(TITLE) compiled OK!\n"
	@printf "\033[0;37m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@printf "\033[0;37m Generating $(TITLE) objects... %-33.33s\r" $@
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

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
	@./$(NAME) $(filter-out $(RULES), $(MAKECMDGOALS))

valgrind: $(NAME)
	@valgrind ./$(NAME) $(filter-out $(RULES), $(MAKECMDGOALS))

%:
	@true

.PHONY: $(RULES)
