# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdiez-as <mdiez-as@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 14:23:45 by mdiez-as          #+#    #+#              #
#    Updated: 2023/05/07 20:25:43 by mdiez-as         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HDR = libft.h

RM = rm -f

AR = ar rcs

CC = gcc

FLAGS = -Wall -Wextra -Werror

FILES			=	ft_isalnum ft_isprint ft_memcmp  ft_putchar_fd ft_split \
					ft_strlcat ft_strncmp ft_substr ft_atoi ft_isalpha.c \
					ft_itoa ft_memcpy  ft_putendl_fd ft_strchr  ft_strlcpy \
					ft_strnstr ft_tolower ft_bzero   ft_isascii ft_memcpy \
					ft_memmove ft_putnbr_fd  ft_strdup  ft_strlen  ft_strrchr \
					ft_toupper ft_calloc  ft_isdigit ft_memchr  ft_memset  \
					ft_putstr_fd  ft_strjoin ft_strmapi ft_strtrim

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsufix .c, $(FILES)))
 
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsufix .o $(FILES)))

.c.o: $(SRCS)
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME) : $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
