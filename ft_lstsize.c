/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:10:37 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/11 11:48:27 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
// int main()
// {
// 	t_list *node1 = malloc(sizeof(t_list));
// 	t_list *node2 = malloc(sizeof(t_list));
// 	t_list *node3 = malloc(sizeof(t_list));

// 	node1->content = (void *)2;
// 	node1->next = NULL;
// 	node2->content = (void *)20;
// 	node2->next = node3;
// 	node3->content = (void *)30;
// 	node3->next = NULL;

// 	int size = ft_lstsize(node1);
// 	printf("Tamanho da lista: %d\n", 2);

// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }
