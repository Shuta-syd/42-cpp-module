# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shogura <shogura@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 23:42:21 by shogura           #+#    #+#              #
#    Updated: 2022/07/29 00:14:43 by shogura          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = $(shell find -name "*.cpp" -type f)
OBJDIR = obj
OBJS = $(SRCS:.c=${OBJDIR}/.o)

RM = rm -f

all: $(NAME)

$(OBJDIR):
	@mkdir $@

$(OBJDIR)/.o:$(SRCS)/.c
	@mkdir -p $(@D)
	@${CC} ${CXXFLAGS} -c $<

$(NAME):$(OBJS)
	@$(CC) -o $(@F) $<

clean:${OBJS}
	@${RM} $^
	@${RM} ${OBJDIR}
	@echo "DELETE $^"

fclean:clean

re: fclean all

.PHONY: all clean fclean re
