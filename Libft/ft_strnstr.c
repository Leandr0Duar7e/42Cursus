/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:36:42 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 17:50:32 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	i = 0;
	if (little == '\0')
		return (0);
	while (big[0] != '\0' && len > 0)
	{
		if (big[0] == little[0])
		{
			while (big[i] == little[i] && len > 0)
			{
				i++;
				len--;
			}
			if (little[i] == '\0')
				return (big);
			i = 0;
		}
		len--;
		big++;
	}
	return (0);
}
