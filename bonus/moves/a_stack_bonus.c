/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_stack_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:23:26 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 20:53:16 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	sa(t_list *a)
{
	ft_lstswap(a);
}

void	pa(t_list **a, t_list **b)
{
	ft_lstpush(a, b);
}

void	ra(t_list **a)
{
	ft_lstrotate(a);
}

void	rra(t_list **a)
{
	ft_lstreverse_rotate(a);
}
