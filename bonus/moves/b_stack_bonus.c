/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_stack_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:07:47 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 20:53:26 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sb(t_list *b)
{
	ft_lstswap(b);
}

void	pb(t_list **a, t_list **b)
{
	ft_lstpush(b, a);
}

void	rb(t_list **b)
{
	ft_lstrotate(b);
}

void	rrb(t_list **b)
{
	ft_lstreverse_rotate(b);
}
