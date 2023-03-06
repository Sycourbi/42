# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 08:28:18 by sycourbi          #+#    #+#              #
#    Updated: 2022/11/22 13:49:07 by sycourbi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ./ft_atoi.c \
	 ./ft_bzero.c \
	 ./ft_calloc.c \
	 ./ft_isalnum.c \
	 ./ft_isalpha.c \
	 ./ft_isascii.c \
	 ./ft_isdigit.c \
	 ./ft_isprint.c \
	 ./ft_itoa.c \
	 ./ft_memchr.c \
	 ./ft_memcmp.c \
	 ./ft_memcpy.c \
	 ./ft_memmove.c \
	 ./ft_memset.c \
	 ./ft_putchar_fd.c \
	 ./ft_putendl_fd.c \
	 ./ft_putnbr_fd.c \
	 ./ft_putstr_fd.c \
	 ./ft_split.c \
	 ./ft_strchr.c \
	 ./ft_strdup.c \
	 ./ft_striteri.c \
	 ./ft_strjoin.c \
	 ./ft_strlcat.c \
	 ./ft_strlcpy.c \
	 ./ft_strlen.c \
	 ./ft_strmapi.c \
	 ./ft_strncmp.c \
	 ./ft_strnstr.c \
	 ./ft_strrchr.c \
	 ./ft_strtrim.c \
	 ./ft_substr.c \
	 ./ft_tolower.c \
	 ./ft_toupper.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS = ./ft_lstadd_back.c \
	./ft_lstmap.c \
	./ft_lstadd_front.c \
	./ft_lstclear.c \
	./ft_lstdelone.c \
	./ft_lstiter.c \
	./ft_lstlast.c \
	./ft_lstnew.c \
	./ft_lstsize.c \

BONUS_O = $(BONUS:.c=.o)

CC = gcc

cflags = -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) -c $(cflags) $< -o $@ -I.
# -c sert a creer fichier objet
# -o sert a creer le fichier executable 
# -I sert a inclure les header (.h)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
# -c sert a creer l'archive
# -s sert ecrire un index des fichier objets dans l'archive ou mettre a jour un existant 
# -r sert inserer des fichiers membre dans l'archive avec remplacement 

bonus: $(BONUS_O)
	ar -rcs $(NAME) $(BONUS_O)
##so:
##	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SOURCES)
##	gcc -nostartfiles -shared -o libft.so $(OBJECTS) $(BONUS)
clean:
	rm -f $(OBJECTS) $(BONUS_O)
# -f sert a ne pas demander de confirmation d'effacement, et ne pas renvoyer de code erreur quand le fichier n'existe pas

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
