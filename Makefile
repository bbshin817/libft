SRCS    = ft_strmapi.c ft_memcpy.c ft_tolower.c ft_strdup.c ft_isalnum.c ft_memmove.c ft_itoa.c ft_isprint.c ft_isascii.c ft_strjoin.c ft_strtrim.c ft_putendl_fd.c ft_substr.c ft_toupper.c ft_putnbr_fd.c ft_strlcpy.c ft_bzero.c ft_memcmp.c ft_strrchr.c ft_calloc.c ft_putstr_fd.c ft_striteri.c ft_memchr.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_atoi.c ft_memset.c ft_isalpha.c ft_putchar_fd.c ft_split.c ft_strncmp.c ft_isdigit.c ft_strnstr.c 
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