NAME    = cub3D
CC      = gcc

MLXFLAGS		= -L$(MINILIBX_PATH) -lmlx -lX11 -lXext -lm
MINILIBX_PATH	= ./minilibx-linux
LIBFTDIR = ./libft
LIBFT_A = $(LIBFTDIR)/libft.a

CFLAGS  = -Wall -Wextra -Werror

SRCDIR  = ./src

SRCS    = $(SRCDIR)/main.c \
          $(SRCDIR)/parsing.c \

OBJS    = $(SRCS:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


$(MINILIBX_PATH)/libmlx.a:
	@$(MAKE) -C $(MINILIBX_PATH)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)
	@$(MAKE) -C $(LIBFTDIR) clean
	@$(MAKE) -C $(MINILIBX_PATH) clean  # ✅ Nettoie aussi mlx

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFTDIR) fclean
	@$(MAKE) -C $(MINILIBX_PATH) clean

re: fclean all

.PHONY: all clean fclean re
