# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okatsala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 12:52:11 by okatsala          #+#    #+#              #
#    Updated: 2020/11/08 14:28:40 by okatsala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRC_DIR = ./srcs/
RM = /bin/rm -f

FUNCTS = main ft_allocate ft_error ft_is_chk ft_wrt ft_dict ft_engine ft_io ft_strdup ft_triple ft_wordfind
OPTIONS = -I includes
FLAGS = -Wall -Wextra -Werror

CFILES = $(patsubst %, $(SRC_DIR)%.c, $(FUNCTS))
OBJECTS = $(patsubst %, %.o, $(FUNCTS))

.PHONY: all $(NAME) $(OBJECTS) clean fclean re

all: $(NAME)

$(OBJECTS):
	@gcc $(OPTIONS) $(FLAGS) -c $(CFILES)

$(NAME): $(OBJECTS)
	@gcc $(OPTIONS) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
