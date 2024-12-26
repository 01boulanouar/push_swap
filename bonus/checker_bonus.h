/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moboulan <moboulan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:29:07 by moboulan          #+#    #+#             */
/*   Updated: 2024/12/23 21:33:55 by moboulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				index;
	int				position;
	int				value;
	struct s_list	*next;
}	t_list;

void	handle_args(int argc, char **argv, t_list **a);
void	apply_move(t_list **a, t_list **b, char *line);
int		is_valid_move(char *move);
int		is_sorted(t_list *lst);
void	ft_error(void);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*get_next_line(int fd);
void	ft_write(char *str);
int		ft_isspace(char c);
int		ft_isallspace(char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_isint(char *str);
long	ft_atol(const char *str);
char	**ft_split(char const *s, char c);
char	**ft_free(char **arr, int i);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstcreate(t_list **lst, int value);
void	ft_lstfree(t_list **lst);
void	ft_lstswap(t_list *lst);
void	ft_lstpush(t_list **to, t_list **from);
void	ft_lstrotate(t_list **lst);
void	ft_lstreverse_rotate(t_list **lst);
void	sa(t_list *a);
void	sb(t_list *b);
void	ss(t_list *a, t_list *b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

#endif