/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:38:53 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 14:03:35 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			if ((s1[i] - s2[i]) < 0)
				return (-1);
			return (1);
		}
		i++;
	}
	if (i < n && s1[i] != s2[i])
	{
		if ((s1[i] - s2[i]) > 0)
			return (1);
		return (-1);
	}
	return (res);
}
