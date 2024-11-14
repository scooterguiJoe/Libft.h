/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:31:56 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/14 15:11:11 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}
// int main()
// {
// 	char buffer[10];
// 	strcpy(buffer, "abcdefg");
// 	printf("Antes do ft_bzero : %s\n", buffer);
// 	ft_bzero(buffer, sizeof(buffer));
// 	printf("Depois do ft_bzero : %s\n", buffer);
// 	return (0);
// }
