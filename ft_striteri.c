/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:28:27 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/08 15:13:37 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// void	ft_increment(unsigned int d, char * ch)
// {
// 	(*ch)++;
// }
// int main(void)
// {
// 	char	str[] = "vans";
// 	ft_striteri(str, ft_increment);
// 	printf("Result is: %s\n", str);
// }
//voltar
