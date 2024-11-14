/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:26:44 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/11 11:48:44 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/* int	main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*current;

	node1 = ft_lstnew("alo");
	node2 = ft_lstnew("ola");
	ft_lstadd_front(&node2, node1);

	current = node1;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	free(node1);
	free(node2);
	return (0);
} *///voltar pela main
