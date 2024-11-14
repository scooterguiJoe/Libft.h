/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:35:54 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/14 15:20:38 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = str;
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
// int main()
// {
// 	char str[20];
// 	int c = 'o';
// 	size_t n = 10;

// 	ft_memset(str, c, n);

// 	printf("Resultado: \"%s\"\n", str);
// 	return 0;
// }
