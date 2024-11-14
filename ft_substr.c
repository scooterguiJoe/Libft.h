/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:55:11 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/06 13:22:57 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((size_t)start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - (size_t)start)
		len = str_len - (size_t) + start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
// //  int main(void)
// {
// 	char *d = ft_substr("tripouille", 100, 1);
// 	printf("Result is: %s\n", d);
// 	printf("Tester will say: %d\n", !strcmp(d, "")); 
// 	free(d);
// 	return (0);
// } 
