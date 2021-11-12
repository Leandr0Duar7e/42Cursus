/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:36:56 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/12 12:08:42 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**makelst(char const *s, char c, char **ssplit, char *temp)
{
	unsigned int	i;
	unsigned int	j;
	int				si;

	i = 0;
	si = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
		{
			ft_strlcpy(temp, s + j, i - j + 1);
			ssplit[si++] = ft_strdup(temp);
		}
	}
	*(ssplit + si) = 0;
	return (ssplit);
}

char	**ft_split(char const *s, char c)
{
	char			**ssplit;
	char			*temp;

	temp = malloc(sizeof(char) * ft_strlen(s));
	if (temp == NULL)
		return (0);
	ssplit = malloc(sizeof(*ssplit) * (ft_strlen(s) + 1));
	if (ssplit == NULL)
		return (0);
	makelst(s, c, ssplit, temp);
	return (ssplit);
}
