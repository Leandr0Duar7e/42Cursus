/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:32:51 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 12:47:10 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	lt;
	char	first;
	int		i;

	i = 0;
	first = s[i];
	while (s[i] != '\0')
		s++;
	lt = (char )c;
	while (s[i] != lt && s[i] != first)
		s--;
	if (s[i] != lt)
		return (0);
	return ((char *)s);
}
