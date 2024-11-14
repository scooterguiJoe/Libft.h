/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:15 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/11 17:23:58 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	node1 = ft_lstnew((void *)10);
// 	node2 = ft_lstnew((void *)15);
// 	free(node1);
// 	free(node2);
// }
