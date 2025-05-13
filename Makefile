# ---------------------------------------------------------------------------- #

SRCS		=	srcs/main.c srcs/arg_parsing.c \
				srcs/md5/md5.c
# ---------------------------------------------------------------------------- #

OBJS		=	$(SRCS:.c=.o)

DEPS		=	$(SRCS:.c=.d)

CC			=	cc

INCL		=	include

FLAGS		=	-MMD -MP

NAME		=	ft_ssl

COLOR_GREEN	=	\033[1;32m
COLOR_RED	=	\033[1;31m
COLOR_BLUE	=	\033[3;36m
COLOR_PURP	=	\033[1;35m
COLOR_END	=	\033[0m

%.o: %.c
	@$(CC) $(FLAGS) -I $(INCL) -c $< -o $@
	@echo "$(COLOR_BLUE) || Compiling ($<)...$(COLOR_END)"

all: $(NAME)

$(NAME): $(OBJS) $(INCL)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "$(COLOR_GREEN) || Done !$(COLOR_END)"

clean:
	@rm -rf $(OBJS)
	@echo "$(COLOR_RED) || Cleaning files...$(COLOR_END)"

fclean: clean
	@rm -rf $(NAME) $(DEPS)
	@echo "$(COLOR_RED) || Cleaning library...$(COLOR_END)"

re: fclean all

.PHONY: re fclean all clean

-include $(DEPS)