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
SRC_DIR	:=	./
OBJ_DIR	:=	build/

# Files ------------------------------------------------------------------------
FILES	:=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c\
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c\
			ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
BONUS	:=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c
OBJ		:=	$(addprefix $(OBJ_DIR), $(FILES:.c=.o))
OBJ_B	:=	$(addprefix $(OBJ_DIR), $(BONUS:.c=.o))

# Compiler ---------------------------------------------------------------------
CC			:=	cc
DEBUG		:=	no
ifeq ($(DEBUG), yes)
CFLAG		:=	-g -W
else
CFLAG		:=	-Wall -Wextra -Werror
endif

#===============================================================================
# Rules ========================================================================
#===============================================================================

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: all $(OBJ_B)
	ar rcs $(NAME) $(OBJ) $(OBJ_B)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c make_build_dir
	$(CC) $(CFLAG) -c $< -o $@

make_build_dir:
	mkdir -p $(OBJ_DIR)

# Clean up ---------------------------------------------------------------------
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

# Recompile --------------------------------------------------------------------
re: fclean all

# PHONY ------------------------------------------------------------------------
.PHONY: clean all fclean re bonus make_build_dir
