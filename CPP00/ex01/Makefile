# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 12:29:58 by tgernez           #+#    #+#              #
#    Updated: 2023/06/23 16:18:25 by tgernez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phone_book
CC		= c++
FLAGS	= -Wall -Wextra -Werror ${C98}
C98		= -std=c++98
INCL	= -I includes
SRCS	=	$(addsuffix .cpp,		\
			$(addprefix srcs/,		\
				main				\
			))
CLAS	= 	$(addsuffix .cpp,	\
			$(addprefix classes/,	\
				PhoneBook			\
				Contact				\
			))
OBJS	= ${SRCS:.cpp=.o} ${CLAS:.cpp=.o}
RM		= rm -rf
RED		= \033[1;31m
NC		= \033[0m
LGREEN	= \033[1;32m
CYAN	= \033[1;36m

%.o: %.cpp
	@echo "\033[1A                                                          "
	@echo -n "\033[1A"
	@echo "${CYAN}Compiling $< ${NC}"
	@${CC} ${FLAGS} -o $@ -c $^ ${INCL}

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} ${INCL} -o $@ 
	@echo "${LGREEN}Successfully created${NC}${CYAN} ${NAME}${NC}${LGREEN}!${NC}"

all: ${NAME}

clean:
	@echo "${CYAN}Cleaned ${NAME}${NC}"
	@${RM} ${OBJS}

test: all
	@echo "No automated tests for this one, you have to do it yourself!"
	valgrind ./${NAME}
	make fclean

fclean:
	@echo "${CYAN}FCleaned ${NAME}${NC}"
	@${RM} ${OBJS} ${NAME}

re: fclean all

.PHONY: all clean fclean re