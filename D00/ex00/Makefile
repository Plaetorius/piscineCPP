# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/11 12:08:13 by tgernez           #+#    #+#              #
#    Updated: 2023/06/11 12:08:14 by tgernez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++
FLAGS	= -Wall -Wextra -Werror
C98		= -std=c++98
SRCS	= 	$(addsuffix .cpp,	\
			megaphone			\
			)		
NAME	= megaphone
RM		= rm -rf
OBJS	= ${SRCS:.cpp=.o}
RED		= \033[1;31m
NC		= \033[0m
LGREEN	= \033[1;32m
CYAN	= \033[1;36m

${NAME}: ${OBJS}
	${CC} ${OBJS} ${FLAGS} ${C98} -o $@

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS} ${NAME}

test: all
	@echo "${CYAN}First Test ${NC}${LGREEN}(1 parameter) ${NC}"
	./${NAME} "shhhhh... I think the students are asleep..."
	@echo "${CYAN}Second Test ${NC}${LGREEN}(multiple parameters)${NC}"
	./${NAME} Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "${CYAN}Third Test ${NC}${LGREEN}(empty)${NC}"
	./${NAME}

re: clean all

