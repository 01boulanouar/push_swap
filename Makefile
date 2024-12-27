NAME = push_swap
NAME_BONUS = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = mandatory/main.c mandatory/parsing.c mandatory/utils/number.c mandatory/utils/split.c mandatory/utils/string.c mandatory/utils/list.c \
mandatory/moves/a_stack.c mandatory/moves/b_stack.c mandatory/moves/both_stacks.c mandatory/moves/moves.c \
mandatory/sort/sort.c  mandatory/sort/order.c mandatory/sort/small_sort.c

SRC_BONUS = bonus/checker_bonus.c bonus/parsing_bonus.c bonus/moves/a_stack_bonus.c bonus/moves/b_stack_bonus.c bonus/moves/both_stacks_bonus.c bonus/moves/moves_bonus.c \
			bonus/gnl/get_next_line_bonus.c bonus/gnl/get_next_line_utils_bonus.c bonus/sort_bonus.c \
			bonus/utils/list_bonus.c bonus/utils/number_bonus.c bonus/utils/split_bonus.c bonus/utils/string_bonus.c 

OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)
	
bonus : $(NAME_BONUS)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@

$(NAME_BONUS) : $(OBJ_BONUS)
	$(CC) $(OBJ_BONUS) -o $@

mandatory/%.o : mandatory/%.c mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus/%.o : bonus/%.c bonus/checker_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)

re : fclean all

.PHONY: clean
