# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 13:05:36 by pjaguin           #+#    #+#              #
#    Updated: 2025/02/05 18:25:45 by pjaguin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
AR = ar -rcs

SRC_DIR = ./srcs/
BASES_DIR = ./srcs/bases/
CHECKS_DIR = ./srcs/checks/
CLEAN_DIR = ./srcs/clean/
CONVERSIONS_DIR = ./srcs/conversions/
MEMORY_DIR = ./srcs/memory/
PRINT_DIR = ./srcs/print/
SORT_DIR = ./srcs/sort/
STRINGS_DIR = ./srcs/strings/
LINKED_LIST_DIR = ./srcs/linked_list/
FT_PRINTF_DIR = ./srcs/ft_printf/
GNL_DIR = ./srcs/gnl/

INC_DIR = ./includes/
OBJ_DIR = ./objects/

BASE_FILES	 	  = ft_atoi_base.c ft_itoa_base.c ft_uitoa_base.c ft_ulitoa_base.c ft_check_base_size.c ft_nbrlen_base.c ft_get_in_base.c \

CHECKS_FILES 	  = ft_is_whitespace.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c 

CLEAN_FILES 	  = ft_free_array_str.c

CONVERSIONS_FILES = ft_atoi.c ft_itoa.c ft_nbr_len.c ft_str_tolower.c ft_str_toupper.c ft_tolower.c ft_toupper.c ft_uitoa.c

MEMORY_FILES 	  = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c

PRINT_FILES		  = ft_count_putchar_fd.c ft_count_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SORT_FILES		  = ft_reverse.c

STRINGS_FILES	  = ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin_free.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
					ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_split_quote.c ft_substr_free.c \

LINKED_LIST_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
					ft_lstmap.c ft_sclst_size.c ft_sclst_max.c ft_sclst_min.c ft_sclst_clean.c ft_sclst_print.c ft_sclst_last.c ft_sclst_addback.c \
					ft_sclst_new.c

GNL_FILES = get_next_line.c get_next_line_utils.c

FT_PRINTF_FILES = ft_printf.c ft_printf_utils.c


OBJ = $(addprefix $(OBJ_DIR), $(FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(BASE_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(CHECKS_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(CLEAN_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(CONVERSIONS_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(MEMORY_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(PRINT_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(SORT_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(STRINGS_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(GNL_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(FT_PRINTF_FILES:.c=.o)) \
	  $(addprefix $(OBJ_DIR), $(LINKED_LIST_FILES:.c=.o)) \

CFLAGS = -Wall -Werror -Wextra

DEF_COLOR = \033[0;90m
GREEN = \033[0;92m
YELLOW = \033[0;93m
CYAN = \033[0;96m

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ) $(BASES)
	@echo "$(GREEN)libft compiled!$(DEF_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(BASES_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(CHECKS_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(CLEAN_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(CONVERSIONS_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR)%.o: $(MEMORY_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR)%.o: $(PRINT_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR)%.o: $(SORT_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR)%.o: $(STRINGS_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR)%.o: $(FT_PRINTF_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(GNL_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

$(OBJ_DIR)%.o: $(LINKED_LIST_DIR)%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ)
	@echo "$(BLUE)libft objects files cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -rf $(NAME)

re: fclean all
	@echo "$(GREEN)libft succesfully rebuilt!$(DEF_COLOR)"

# Specify that these are not files to compile (just for safety)
.PHONY: all clean fclean re
