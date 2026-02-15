NAME = Harl
SRC = main.cpp Harl.cpp 
OBJ = $(SRC:.cpp=.o)
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HPP = Harl.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HPP)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean 
