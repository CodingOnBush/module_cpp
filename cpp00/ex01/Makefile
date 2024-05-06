NAME	:=	phonebook

CPP		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

INC_DIR	:=	./inc
SRC_DIR	:=	./src
BIN_DIR	:=	./bin

HEADER	:=	$(INC_DIR)/Contact.class.hpp \
			$(INC_DIR)/PhoneBook.class.hpp

SRC		:=	$(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Contact.class.cpp \
			$(SRC_DIR)/PhoneBook.class.cpp

OBJ		:=	$(SRC:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

all: $(NAME)

print:
	@echo $(SRC)
	@echo $(OBJ)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -I $(INC_DIR) -o $(NAME)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re