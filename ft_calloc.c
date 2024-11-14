/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:26:03 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/06 13:23:47 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*i;

	if (num == 0 || size == 0)
		i = malloc(0);
	else if ((num * size) / num != size)
		return (NULL);
	else
		i = malloc(num * size);
	if (!i)
		return (NULL);
	if (num != 0 || size != 0)
		ft_bzero(i, num * size);
	return (i);
}
//OK
// int main (void)
// {
// 	//int  *pointer = ft_calloc(-5, -5);
// 	//printf("pointer: %p \n", pointer);
// 	int  *pointer2 = calloc(-5, -5);
// 	printf("pointer: %p \n", pointer2);
// }
