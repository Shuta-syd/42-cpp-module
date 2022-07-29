# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 23:42:21 by shogura           #+#    #+#              #
#    Updated: 2022/07/29 09:53:55 by shogura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(shell find . -name "*.cpp" -type f)
OBJDIR = obj
OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

RM = rm -rf

all: $(NAME) $(OBJDIR)

$(OBJDIR):
	@mkdir -p $@

$(OBJDIR)/%.o:%.c
	@$(CXX) $(CXXFLAGS) $(@F) -c $<
	@echo "$< =========> $(GRN) $@ $(RES)"

$(NAME):$(OBJS)
	@$(CXX) -o $(@F) $<
	@echo "$(CYN)\n=====link=====$(RES)"
	@echo "$(YEL)Objects$(RES): $(OBJS)\n"
	@echo "$(YEL)Flags$(RES): $(CXXFLAGS)\n"
	@echo "     $(MGN)--->$(RES) $(GRN)$(NAME)$(RES)"
	@echo "$(CYN)==============$(RES)"

clean:$(OBJS)
	@$(RM) $^
	@$(RM) $(OBJDIR)
	@echo "DELETE $<"

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
