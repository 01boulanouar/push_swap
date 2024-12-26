/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 20:37:56 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 19:07:20 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit (1);
}

int	isduplicate(t_list *lst, int value)
{
	while (lst)
	{
		if (lst->value == value)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	is_valid_line(char *str, t_list **a)
{
	int		i;
	int		valid;
	char	**arr;

	i = 0;
	valid = 1;
	arr = ft_split(str, ' ');
	while (arr[i])
	{
		if (!ft_isint(arr[i]) || isduplicate(*a, ft_atol(arr[i])))
			valid = 0;
		ft_lstcreate(a, ft_atol(arr[i]));
		i++;
	}
	ft_free(arr, i);
	return (valid);
}

void	handle_args(int argc, char **argv, t_list **a)
{
	int	i;

	if (argc == 1)
		exit(0);
	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			if (!is_valid_line(argv[i], a) || ft_strlen(argv[i]) == 0)
				ft_error();
			i++;
		}
	}
}
