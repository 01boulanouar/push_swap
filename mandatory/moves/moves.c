/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:19:11 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/25 20:47:44 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstswap(t_list *lst)
{
	int	temp;

	if (!lst || !lst->next)
		return ;
	temp = lst->value;
	lst->value = lst->next->value;
	lst->next->value = temp;
}

void	ft_lstpush(t_list **to, t_list **from)
{
	t_list	*node;

	if (!from || !(*from))
		return ;
	node = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = node;
}

void	ft_lstrotate(t_list **lst)
{
	t_list	*node;
	t_list	*last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	last = ft_lstlast(*lst);
	node = (*lst)->next;
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = node;
}

void	ft_lstreverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*second_last;

	if (!lst || !(*lst) || !(*lst)->next)
		return ;
	second_last = *lst;
	while (second_last->next->next)
		second_last = second_last->next;
	last = second_last->next;
	second_last->next = NULL;
	last->next = *lst;
	*lst = last;
}
