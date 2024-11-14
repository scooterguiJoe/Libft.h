/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:12:31 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/06 13:28:53 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *str, int c)
// {
// 	char	*ptr;

// 	ptr = str;
// 	while (*ptr)
// 	{
// 		ptr++;
// 	}
// 	while (ptr >= str)
// 	{
// 		if (ptr == (char *)str)
// 		{
// 			return ((char *)ptr);
// 		}
// 		ptr--;
// 	}
// 	return (NULL);
// }
//duvida

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return (ptr = (char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (ptr = (char *)s + i);
		i--;
	}
	return (NULL);
}
