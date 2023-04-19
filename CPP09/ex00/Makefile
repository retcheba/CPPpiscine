SRCS		= main.cpp BitcoinExchange.cpp
OBJS		= $(SRCS:.cpp=.o)
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
NAME		= btc
RM			= rm -f

all:		$(NAME)

%.o: %.cpp
			@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
			@echo "\033[1;92mMake succesfully executed\033[0m"

clean:
			@$(RM) $(OBJS)
			@echo "\033[1;93mClean succesfully executed\033[0m"

fclean:
			@$(RM) $(OBJS)
			@$(RM) $(NAME)
			@echo "\033[1;91mFclean succesfully executed\033[0m"

re:			fclean all

.PHONY:		all clean fclean re

