/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:46:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 16:13:35 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*makes(int n, int zr, char *res, int i)
{
	while (n > 9)
	{
		res[i++] = '0' + n / (zr / 10);
		n = n % (zr / 10);
		zr = zr / 10;
	}
	while (zr != 10)
	{
		res[i++] = '0';
		zr = zr / 10;
	}
	res[i] = '0' + n;
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		zr;
	int		i;

	zr = 10;
	i = 1;
	while ((n / zr) != 0)
	{
		i++;
		zr = zr * 10;
	}
	res = malloc(sizeof(char) * i);
	if (res == NULL)
		return (0);
	i = 0;
	makes(n, zr, res, i);
	return (res);
}
