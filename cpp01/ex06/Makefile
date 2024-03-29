# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 23:42:21 by shogura           #+#    #+#              #
#    Updated: 2022/08/02 19:36:15 by shogura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CXX = c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98

SRCDIR = src
SRCS = $(shell find $(SRCDIR) -name "*.cpp" -type f)

OBJDIR = obj
OBJS = $(subst $(SRCDIR), ./$(OBJDIR), $(SRCS:%.cpp=%.o))

INC = inc

RM = rm -rf

all: $(NAME)

$(OBJDIR)/%.o:$(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -I$(INC) -o $@ -c $<
	@echo "$< =========> $(GRN) $@ $(RES)"

$(NAME):$(OBJS)
	@$(CXX) -o $(NAME) $(OBJS)
	@echo "$(CYN)\n=====link=====$(RES)"
	@echo "$(YEL)Objects$(RES): $(OBJS)\n"
	@echo "$(YEL)Flags$(RES): $(CXXFLAGS)\n"
	@echo "     $(MGN)--->$(RES) $(GRN)$(NAME)$(RES)"
	@echo "$(CYN)==============$(RES)"

clean:
	$(RM) $(OBJS)
	$(RM) $(NAME)
	@$(RM) $(OBJDIR)

fclean:clean

re: fclean all

.PHONY: all clean fclean re

RED = \033[31m
GRN = \033[32m
YEL = \033[33m
BLU = \033[34m
MGN = \033[35m
CYN = \033[36m
RES = \033[m
