/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:46:28 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 15:52:52 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		itrim;
	int		ftrim;

	itrim = 0;
	if (!s1)
		return (0);
	ftrim = ft_strlen(s1);
	while (ft_strchr(set, s1[itrim]) && itrim < ftrim)
		itrim++;
	while (ft_strchr(set, s1[ftrim - 1]) && ftrim > itrim)
		ftrim--;
	res = malloc(sizeof(char) * (ftrim - itrim + 1));
	if (res == NULL)
		return (0);
	ft_strlcpy(res, s1 + itrim, ftrim - itrim + 1);
	printf("%d\n", ftrim);
	res[ftrim - itrim] = '\0';
	return (res);
}
