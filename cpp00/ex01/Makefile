NAME	:=	phonebook

CPP		:=	c++
CFLAGS	:=	-Wall -Wextra -Werror -std=c++98

INC_DIR	:=	./inc
SRC_DIR	:=	./src
BIN_DIR	:=	./bin
DEP_DIR	:=	./dep

SRC		:=	$(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Contact.cpp \
			$(SRC_DIR)/PhoneBook.cpp

OBJ		:=	$(SRC:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

DEP		:=	$(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(DEPS) $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -I $(INC_DIR) -o $(NAME)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(DEP_DIR)/%.d: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CPP) $(CFLAGS) -I $(INC_DIR) -MMD -MP -MF $@ -c $<

clean:
	rm -rf $(BIN_DIR)
	rm -rf $(DEP_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re