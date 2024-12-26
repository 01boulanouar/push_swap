/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:23:26 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/21 15:31:48 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *a)
{
	ft_lstswap(a);
	ft_write("sa\n");
}

void	pa(t_list **a, t_list **b)
{
	ft_lstpush(a, b);
	ft_write("pa\n");
}

void	ra(t_list **a)
{
	ft_lstrotate(a);
	ft_write("ra\n");
}

void	rra(t_list **a)
{
	ft_lstreverse_rotate(a);
	ft_write("rra\n");
}
