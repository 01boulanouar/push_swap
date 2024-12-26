/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 20:12:25 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 19:21:12 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	if (!lst)
		return (0);
	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

void	ft_lstcreate(t_list **lst, int value)
{
	t_list	*node;
	t_list	*current;

	node = malloc(sizeof(t_list));
	if (!node)
		return ;
	node->index = 0;
	node->position = 0;
	node->value = value;
	node->next = NULL;
	current = *lst;
	while (current)
	{
		if (current->value > value)
			current->index++;
		else
			node->index++;
		current = current->next;
	}
	ft_lstadd_back(lst, node);
}

void	ft_lstfree(t_list **lst)
{
	t_list	*ptr;
	t_list	*node;

	ptr = *lst;
	if (!ptr)
		return ;
	while (ptr)
	{
		node = ptr->next;
		free(ptr);
		ptr = node;
	}
}
