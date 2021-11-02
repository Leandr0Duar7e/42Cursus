/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:36:42 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/02 11:49:38 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[0] != '\0' && len > 0)
	{
		if (haystack[0] == needle[0])
		{
			while (haystack[i] == needle[i] && len > 0)
			{
				i++;
				len--;
			}
			if (needle[i] == '\0')
				return ((char *)haystack);
			i = 0;
		}
		len--;
		haystack++;
	}
	return (0);
}
