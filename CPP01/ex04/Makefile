# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/17 12:29:58 by tgernez           #+#    #+#              #
#    Updated: 2023/06/24 16:23:52 by tgernez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= sed_is_for_losers
CC		= c++
FLAGS	= -Wall -Wextra -Werror ${C98}
C98		= -std=c++98
INCL	= -I .
SRCS	=	$(addsuffix .cpp,		\
			$(addprefix ./,			\
				main				\
			))
OBJS	= ${SRCS:.cpp=.o}
RM		= rm -rf
RED		= \033[1;31m
NC		= \033[0m
LGREEN	= \033[1;32m
CYAN	= \033[1;36m

%.o: %.cpp
	@echo "\033[1A                                                          "
	@echo -n "\033[1A"
	@echo "${CYAN}Compiling $< ${NC}"
	@${CC} ${FLAGS} -o $@ -c $^ ${INCL} -D MODE=1 # Change MODE to 0 to start TESTS

${NAME}: ${OBJS}
	@${CC} ${FLAGS} ${OBJS} ${INCL} -o $@ 
	@echo "${LGREEN}Successfully created${NC}${CYAN} ${NAME}${NC}${LGREEN}!${NC}"

all: ${NAME}

test: re
	@echo "${CYAN}First Test ${NC}${LGREEN}(poem, \"e\", \"BONJOUR\") ${NC}"
	valgrind ./${NAME} poem "e" "BONJOUR"
	cat poem.replace
	@echo "${CYAN}Second Test ${NC}${LGREEN}(poem, \"Le\", \"HAHAHAHAHAHAHAHAHAHA\") ${NC}"
	valgrind ./${NAME} poem "Le" "HAHAHAHAHAHAHAHAHAHA"
	cat poem.replace
	@echo "${CYAN}Third Test ${NC}${LGREEN}(poem, \"\", \"ceciNetaitRien\") ${NC}"
	valgrind ./${NAME} poem "" "ceciNetaitRien"
	cat poem.replace
	@echo "${CYAN}Fourth Test ${NC}${LGREEN}(empty_file, \"\", \"vide?\") ${NC}"
	valgrind ./${NAME} empty_file "" "vide?"
	@echo "${CYAN}Fifth Test ${NC}${LGREEN}(empty_file, \"aaa\", \"ooo\") ${NC}"
	valgrind ./${NAME} empty_file "aaa" "ooo"
	@echo "${CYAN}Sixth Test ${NC}${LGREEN}(only 2 params) ${NC}"
	valgrind ./${NAME} empty_file "aaa"
	@echo "${CYAN}Seventh Test ${NC}${LGREEN}(no params) ${NC}"
	valgrind ./${NAME}
	@echo "${CYAN}Eigth Test ${NC}${LGREEN}(this_file_does_not_exists, \"aaa\", \"bbb\") ${NC}"
	valgrind ./${NAME} this_file_does_not_exists, "aaa", "bbb"
	rm -f poem.replace
	rm -f ${NAME}


clean:
	@echo "${CYAN}Cleaned ${NAME}${NC}"
	@${RM} ${OBJS}

fclean:
	@echo "${CYAN}FCleaned ${NAME}${NC}"
	@${RM} ${OBJS} ${NAME}

re: fclean all

.PHONY: all clean fclean re