# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 18:02:37 by alsaeed           #+#    #+#              #
#    Updated: 2024/08/21 19:32:33 by alsaeed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


GREEN 		= \033[32m
RED 		= \033[31m
BOLD_GREEN 	= \033[1;32m
BOLD_RED 	= \033[1;31m
RESET 		= \033[0m

NAME = span

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDES = -I./

SRCS = Span.cpp

OBJS_DIR = objs

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(OBJS_DIR)
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) main.cpp
	@$(CXX) $(CXXFLAGS) $(INCLUDES) $(OBJS) main.cpp -o $@
	@echo "span compiled: $(BOLD_GREEN)OK$(RESET)"

clean:
	@if [ -e $(OBJS_DIR) ]; then \
		rm -rf $(OBJS_DIR); \
		echo "span clean: $(BOLD_RED)OK$(RESET)"; \
	fi

fclean: clean
	@if [ -e $(NAME).dSYM ]; then \
		rm -rf $(NAME).dSYM; \
	fi
	@if [ -e $(NAME) ]; then \
		rm -rf $(NAME); \
		echo "span full-clean: $(BOLD_RED)OK$(RESET)"; \
	fi

re: fclean all

.PHONY: all clean fclean re