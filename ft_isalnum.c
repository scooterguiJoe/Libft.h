/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvascon <guvascon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:11:48 by guvascon          #+#    #+#             */
/*   Updated: 2024/11/08 10:41:28 by guvascon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (c);
	return (0);
}
// voltar e perceber o pq de ser return(c) em vez de return (1)
//OK
// int main()
// {
// 	char i = '0';
// 	printf("%d\n", ft_isalnum(i));
// 	return (0);
// }
