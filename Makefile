# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lade-kon <lade-kon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/03 12:39:54 by lde-koni      #+#    #+#                  #
#    Updated: 2024/05/17 11:47:26 by lade-kon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC			:=	cc
CFLAGS		:=	-Wall -Werror -Wextra

INCLS		:=	incl
INCL		:=	-I $(INCLS)

SRC_DIR		:=	src
SRC_LIBFT	:=	libft
SRC_STRING	:=	$(SRC_LIBFT)/string
SRC_CLASS	:=	$(SRC_LIBFT)/class
SRC_MEM		:=	$(SRC_LIBFT)/memory
SRC_OUTPUT	:=	$(SRC_LIBFT)/output
SRC_LIST	:=	$(SRC_LIBFT)/list
SRC_PRINTF	:=	ft_printf
SRC_GNL		:=	get_next_line

DIRS		:=	$(LIBFT_DIR) $(SRC_PRINTF) $(SRC_GNL)
SRC_DIRS	:=	$(SRC_STRING) $(SRC_CLASS) $(SRC_MEM) $(SRC_OUTPUT) $(SRC_LIST)

SRC_FILES	:=	$(addprefix $(SRC_CLASS)/, \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_isnumber.c ) \
				$(addprefix $(SRC_MEM)/, \
				ft_bzero.c	\
				ft_calloc.c \
				ft_memchr.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_memcmp.c ) \
				$(addprefix $(SRC_OUTPUT)/, \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_putarr_fd.c \
				ft_puterror_fd.c ) \
				$(addprefix $(SRC_STRING)/, \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_strrchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_substr.c  \
				ft_strnstr.c \
				ft_strtrim.c \
				ft_striteri.c \
				ft_strmapi.c \
				ft_atoi.c \
				ft_atol.c \
				ft_itoa.c \
				ft_split.c ) \
				$(addprefix $(SRC_LIST)/, \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstprint.c ) \
				$(addprefix $(SRC_PRINTF)/, \
				ft_printf.c \
				ft_utils.c \
				print_c.c \
				print_s.c \
				print_id.c \
				print_u.c \
				print_hex.c \
				print_p.c ) \
				$(addprefix $(SRC_GNL)/, \
				get_next_line.c \
				get_next_line_utils.c )

OBJ_DIR		:=	obj
OBJ_FILES	:=	$(addprefix obj/, $(SRC_FILES:.c=.o))

NAME		:=	libft.a

.PHONY : all clean fclean re

all: $(NAME)

$(NAME) : $(OBJ_FILES)
	@ar -rcs $(NAME) $?

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(addprefix $(OBJ_DIR)/, $(DIRS))
	@mkdir -p $(addprefix $(OBJ_DIR)/$(LIBFT_DIR)/, $(SRC_DIRS))
	@$(CC) $(CFLAGS) $(INCL) -c $< -o $@ 

norminette:
	@echo "${CYAN}🧐 Checking the Norm...${RESET}"
	@norminette -R CheckForbiddenSourceHeader
	@echo "${GREEN} Norm-i-netting complete. Files are NORM PROOF!${RESET}" 

clean:
	@rm -rf $(OBJ_FILES)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

## Colours ##
RESET		:= \033[0m
RED			:= \033[1;91m
GREEN		:= \033[1;92m
YELLOW		:= \033[1;93m
BLUE		:= \033[1;94m
PURPLE		:= \033[1;95m
CYAN		:= \033[1;96m
WHITE		:= \033[1;97m
BLACK		:= \033[1;90m