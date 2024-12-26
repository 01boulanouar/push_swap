/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:07:47 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/21 15:31:51 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list *b)
{
	ft_lstswap(b);
	ft_write("sb\n");
}

void	pb(t_list **a, t_list **b)
{
	ft_lstpush(b, a);
	ft_write("pb\n");
}

void	rb(t_list **b)
{
	ft_lstrotate(b);
	ft_write("rb\n");
}

void	rrb(t_list **b)
{
	ft_lstreverse_rotate(b);
	ft_write("rrb\n");
}
