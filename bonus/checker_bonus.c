/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:29:44 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 21:47:20 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*handle_stdin(void)
{
	char	*line;
	char	*tmp;
	char	*moves;

	moves = ft_strdup("");
	line = get_next_line(0);
	while (line)
	{
		tmp = ft_strjoin(moves, line);
		free(moves);
		moves = tmp;
		free(line);
		line = get_next_line(0);
	}
	return (moves);
}

void	check_sort(t_list	**a, t_list	**b, char *moves)
{
	int		i;
	int		valid;
	char	**arr;

	i = 0;
	valid = 1;
	arr = ft_split(moves, '\n');
	free(moves);
	while (arr[i])
	{
		if (is_valid_move(arr[i]))
			apply_move(a, b, arr[i]);
		else
			valid = 0;
		i++;
	}
	ft_free(arr, i);
	if (!valid)
		ft_error();
	if (is_sorted(*a) && ft_lstsize(*b) == 0)
		ft_write("OK\n");
	else
		ft_write("KO\n");
}

int	main(int argc, char **argv)
{
	char	*moves;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	handle_args(argc, argv, &a);
	moves = handle_stdin();
	check_sort(&a, &b, moves);
	ft_lstfree(&a);
	ft_lstfree(&b);
	return (0);
}
