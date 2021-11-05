/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:45:42 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 15:50:27 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int		i;

	i = 0;
	subs = malloc(sizeof(char) * len);
	if (subs == NULL)
		return (0);
	while (s[start] != '\0' && len > 0)
	{
		subs[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (subs);
}
