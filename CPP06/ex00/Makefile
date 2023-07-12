# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 12:29:58 by tgernez           #+#    #+#              #
#    Updated: 2023/07/07 12:58:06 by tgernez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= conversions
CC		= c++
DEP_FLAG= -MMD
FLAGS	= -Wall -Wextra -Werror ${C98} ${DEP_FLAG}
C98		= -std=c++98
INCL	= -I includes
SRCS	=	$(addsuffix .cpp,		\
			$(addprefix srcs/,		\
				main				\
			))
CLAS	= 	$(addsuffix .cpp,		\
			$(addprefix classes/,	\
				Conversion			\
			))
OBJS	= ${SRCS:.cpp=.o} ${CLAS:.cpp=.o}
DEPS	= ${OBJS:.o=.d}
RM		:= rm -rf
RED		:= \033[1;31m
NC		:= \033[0m
LGREEN	:= \033[1;32m
CYAN	:= \033[1;36m

%.o: %.cpp
	@echo "\033[1A                                                              "
	@echo -n "\033[1A"
	@echo "${CYAN}Compiling $< ${NC}"
	@${CC} ${FLAGS} -o $@ -c $< ${INCL}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} ${INCL} -o $@ 
	@echo "${LGREEN}Successfully created${NC}${CYAN} ${NAME}${NC}${LGREEN}!${NC}"

all: ${NAME}

test: re 
	@echo "No automated tests for this one!"
#	valgrind ./${NAME}
	./${NAME}
	make fclean

clean:
	@echo "${CYAN}Cleaned ${NAME}${NC}"
	@${RM} ${OBJS} ${DEPS}

fclean:
	@echo "${CYAN}FCleaned ${NAME}${NC}"
	@${RM} ${OBJS} ${NAME} ${DEPS}

re: fclean all

-include ${DEPS}

.PHONY: all clean fclean re