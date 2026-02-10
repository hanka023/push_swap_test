
# Kompilátor
CC = cc

# Kompilační příznaky
CFLAGS = -Wall -Wextra -Werror -I./printf -I./libft

LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/libftprintf.a

#SRC = src/main.c

# Zdrojové soubory
SRCS =	main.c \
		operations/rotate.c \
		operations/reverse_rotate.c \
		operations/switch_push.c \
		sort/radix_sort.c \
		sort/tiny_sort.c \
		sort/sort.c \
		utils/ft_isnbr.c \
		utils/ft_atoi_checked.c \
		utils/check_duplicates.c \
		utils/list_1.c \
		utils/list_2.c \
		utils/ft_split.c \
	
# Objektové soubory
OBJS = $(SRCS:%.c=%.o)

# Název knihovny
# NAME = ps.a

NAME = push_swap

# Výchozí cíl
all: $(NAME)

$(FT_PRINTF):
	make -C  ./ft_printf

# $(LIBFT):
# 	make -C  ./libft


# Vytvoření statické knihovny
# $(NAME): $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

$(NAME): $(OBJS) $(FT_PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(FT_PRINTF) -o $(NAME)

# Překlad .c → .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Vyčištění objektových souborů
clean:
	rm -f $(OBJS)
	make -C ./ft_printf clean


# Vyčištění všeho (objekty + knihovna)
fclean: clean
	rm -f $(NAME)
	make -C ./ft_printf fclean


# Překompilovat celé
re: fclean all

# Phony cíle
.PHONY: all clean fclean re





