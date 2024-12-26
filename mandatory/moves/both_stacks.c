/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:08:34 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/21 15:31:24 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list *a, t_list *b)
{
	ft_lstswap(a);
	ft_lstswap(b);
	ft_write("ss\n");
}

void	rr(t_list **a, t_list **b)
{
	ft_lstrotate(a);
	ft_lstrotate(b);
	ft_write("rr\n");
}

void	rrr(t_list **a, t_list **b)
{
	ft_lstreverse_rotate(a);
	ft_lstreverse_rotate(b);
	ft_write("rrr\n");
}
