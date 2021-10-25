/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:00:09 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 14:02:38 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	lt;

	lt = c;
	if (c >= 65 && c <= 90)
		lt = lt + 32;
	return (lt);
}
