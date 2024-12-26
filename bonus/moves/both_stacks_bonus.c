/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   both_stacks_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:08:34 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 20:53:37 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ss(t_list *a, t_list *b)
{
	ft_lstswap(a);
	ft_lstswap(b);
}

void	rr(t_list **a, t_list **b)
{
	ft_lstrotate(a);
	ft_lstrotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	ft_lstreverse_rotate(a);
	ft_lstreverse_rotate(b);
}
