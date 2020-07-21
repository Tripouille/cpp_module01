NAME				= replace
SRCS				= $(addprefix srcs/, main.cpp)
OBJS				= ${SRCS:.cpp=.o}

CC					= clang++
CFLAGS				= -g3 -Wall -Wextra -Werror -fsanitize=address -I includes

all:				${NAME}

.cpp.o:
					${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o}

$(NAME):			${OBJS}
					${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
					rm -rf ${OBJS}

fclean:				clean
					rm -rf ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
