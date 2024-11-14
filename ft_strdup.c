/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:48:13 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/06 13:26:10 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;

	str = malloc(strlen(src) + 1);
	if (str == NULL)
		return (NULL);
	strcpy (str, src);
	return (str);
}
// int main(int ac,char **av)
// {
// 	char *og;
// 	char *copy;

// 	if(ac == 2)
// 	{
// 		og = ft_strdup(av[1]);
// 		copy = strdup(av[1]);
// 		printf("|%s|\n|%s|\n", og, copy);
// 	}
// 	return (0);
// }
