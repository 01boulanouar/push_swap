/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 23:31:55 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/22 00:00:09 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	set_position(t_list *lst)
{
	int		position;

	position = 0;
	while (lst)
	{
		lst->position = position++;
		lst = lst->next;
	}
}

void	move_a(t_list **a, t_list **b)
{
	int	b_size;
	int	max_position;

	b_size = ft_lstsize(*b);
	while (b_size)
	{
		set_position(*b);
		max_position = find_max_postion(*b);
		while ((*b)->position != max_position)
		{
			if (max_position < b_size / 2)
				rb(b);
			else
				rrb(b);
		}
		pa(a, b);
		b_size--;
	}
}

void	move_b(t_list **a, t_list **b, int a_size)
{
	int	i;
	int	x;

	if (a_size <= 100)
		x = 16;
	else
		x = 36;
	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->index <= i + x)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
}

void	sort(t_list **a, t_list **b)
{
	int		a_size;

	if (!is_sorted(*a))
	{
		a_size = ft_lstsize(*a);
		if (a_size == 2)
			sa(*a);
		else if (a_size == 3)
			sort_3(a);
		else if (a_size == 4)
			sort_4(a, b);
		else if (a_size == 5)
			sort_5(a, b);
		else
		{
			move_b(a, b, a_size);
			move_a(a, b);
		}
	}
}
