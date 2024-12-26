/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 16:42:49 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 18:23:33 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_list **a)
{
	int	max;

	max = find_max(*a);
	if ((*a)->value == max)
		ra(a);
	else if ((*a)->next->value == max)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(*a);
}

void	sort_4(t_list **a, t_list **b)
{
	int	min;

	min = find_min(*a);
	while (((*a)->value != min))
	{
		if ((*a)->next->value == min)
			ra(a);
		else
			rra(a);
	}
	if (!is_sorted(*a))
	{
		pb(a, b);
		sort_3(a);
		pa(a, b);
	}
}

void	sort_5(t_list **a, t_list **b)
{
	int	min;

	min = find_min(*a);
	while (((*a)->value != min))
	{
		if ((*a)->next->value == min)
			ra(a);
		else
			rra(a);
	}
	if (!is_sorted(*a))
	{
		pb(a, b);
		sort_4(a, b);
		pa(a, b);
	}
}
