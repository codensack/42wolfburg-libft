# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/10 12:54:14 by thmasur           #+#    #+#              #
#    Updated: 2024/06/10 12:54:14 by thmasur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#===============================================================================
# Variables ====================================================================
#===============================================================================

NAME	:=	libft.a

# Directories ------------------------------------------------------------------
SRC_DIR	:=	src/
OBJ_DIR	:=	build/

# Files ------------------------------------------------------------------------
FILES	:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS	:=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			ft_lstmap.c
OBJ		:=	$(addprefix $(OBJ_DIR), $(FILES:.c=.o))
OBJ_B	:=	$(addprefix $(OBJ_DIR), $(BONUS:.c=.o))

# Compiler ---------------------------------------------------------------------
CC			:=	gcc
DEBUG		:=	no
ifeq ($(DEBUG), yes)
CFLAG		:=	-g -W
else
CFLAG		:=	-Wall -Wextra -Werror
endif

# Colors -----------------------------------------------------------------------
DELETE		:= "\033[33m"
CREATE		:= "\033[32m"
SUCCESS		:= "\033[30;42m"
RESET_COLOR	:= "\033[0m"

#===============================================================================
# Rules ========================================================================
#===============================================================================

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo $(SUCCESS) "LIBFT [create] : $(NAME)" $(RESET_COLOR)

bonus: $(OBJ) $(OBJ_B)
	@ar rcs $(NAME) $(OBJ) $(OBJ_B)
	@echo $(SUCCESS) "LIBFT [create] : $(NAME)" $(RESET_COLOR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@gcc $(CFLAG) -c $< -o $@
	@echo $(CREATE) "LIBFT [create] : $@" $(RESET_COLOR)

# Clean up ---------------------------------------------------------------------
clean:
	@rm -rf $(OBJ_DIR)
	@echo $(DELETE) "LIBFT [clean] : $(OBJ_DIR)*" $(RESET_COLOR)

fclean: clean
	@rm -f $(NAME)
	@echo $(DELETE) "LIBFT [delete] : $(NAME)" $(RESET_COLOR)
	@echo $(DELETE) "LIBFT [delete] : $(OBJ_DIR)*" $(RESET_COLOR)

# Recompile --------------------------------------------------------------------
re: fclean all

# PHONY ------------------------------------------------------------------------
.PHONY: clean, all, fclean, re, bonus
