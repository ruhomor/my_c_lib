# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kachiote <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 21:02:57 by kachiote          #+#    #+#              #
#    Updated: 2019/09/22 16:24:03 by kachiote         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCS = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strdup \
		ft_strcpy \
		ft_strncpy \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strstr \
		ft_strnstr \
		ft_strcmp \
		ft_strncmp \
		ft_isdigit \
		ft_atoi \
		ft_isalpha \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_memalloc \
		ft_memdel \
		ft_strnew \
		ft_strdel \
		ft_strclr \
		ft_striter \
		ft_striteri \
		ft_strmap \
		ft_strmapi \
		ft_strequ \
		ft_strnequ \
		ft_strsub \
		ft_strjoin \
		ft_strtrim \
		ft_isspace

SRCS = $(patsubst %, ./srcs/%.c, $(FUNCS))

OUT = $(patsubst %, %.o, $(FUNCS))

INCL = ./includes/

FLAGS = -Werror -Wextra -Wall

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -c -I$(INCL)
	ar -rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
