/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:08:40 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/06 13:26:35 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dest[d] && d < size)
	{
		d++;
	}
	while (src[s] && (d + s + 1) < size)
	{
		dest[d + s] = src[s];
		s++;
	}
	if (d < size)
	{
		dest [d + s] = '\0';
	}
	return (d + ft_strlen(src));
}
//OK
