/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:46:11 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/15 16:52:47 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	len1;
	size_t	len2;
	int		i;
	int		j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	nstr = malloc(sizeof(*s1) * (len1 + len2 + 1));
	if (nstr == NULL)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i + j] = s2[j];
		j++;
	}
	nstr[i + j] = '\0';
	return (nstr);
}
