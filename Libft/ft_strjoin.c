/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:46:11 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 15:47:54 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*nstr;
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	nstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (nstr == NULL)
		return (0);
	ft_strlcat(nstr, s1, (size_t)len1 + 1);
	ft_strlcat(nstr, s2, (size_t)(len1) + (size_t)len2 + 1);
	return (nstr);
}
