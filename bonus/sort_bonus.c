/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 20:20:10 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 21:55:41 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_sorted(t_list *lst)
{
	while (lst && lst->next)
	{
		if (lst->value > lst->next->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	is_valid_move(char *move)
{
	return (!ft_strcmp(move, "sa") || !ft_strcmp(move, "sb")
		|| !ft_strcmp(move, "pa") || !ft_strcmp(move, "pb")
		|| !ft_strcmp(move, "ra") || !ft_strcmp(move, "rb")
		|| !ft_strcmp(move, "rra") || !ft_strcmp(move, "rrb")
		|| !ft_strcmp(move, "ss") || !ft_strcmp(move, "rr")
		|| !ft_strcmp(move, "rrr"));
}

void	apply_move(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "sa"))
		sa(*a);
	else if (!ft_strcmp(line, "sb"))
		sb(*b);
	else if (!ft_strcmp(line, "ss"))
		ss(*a, *b);
	else if (!ft_strcmp(line, "pa"))
		pa(a, b);
	else if (!ft_strcmp(line, "pb"))
		pb(a, b);
	else if (!ft_strcmp(line, "ra"))
		ra(a);
	else if (!ft_strcmp(line, "rb"))
		rb(b);
	else if (!ft_strcmp(line, "rra"))
		rra(a);
	else if (!ft_strcmp(line, "rr"))
		rr(a, b);
	else if (!ft_strcmp(line, "rrb"))
		rrb(b);
	else if (!ft_strcmp(line, "rrr"))
		rrr(a, b);
}
