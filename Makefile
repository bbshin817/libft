# SRCS    = ft_putchar.c    ft_putstr.c    ft_strlen.c    ft_strcmp.c    ft_swap.cw 
SRCS    = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c ft_strchr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS    = $(SRCS:.c=.o)
# INCS    = -I includes
NAME    = libft.a
CC        = cc
RM        = rm -f
CFLAGS    = -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:    clean
	$(RM) $(NAME)

re:    fclean    all

.PHONY:    all clean fclean re