/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/21 12:17:59 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	st1[50] = "";
	char	st2[] = "SecondSegunda";

	printf("\nCompare ft_memcpy( st1, st2, 5)\n");
	printf("%s\n", ft_memcpy( st1, st2, 5));	
	printf("%s\n", memcpy( st1, st2, 3));
	printf("Compare ft_memcpy( st1, st2, 2)\n");
	printf("%s\n", memcpy( st1, st2, 8));
	printf("%s\n", ft_memcpy( st1, st2, 8));
	printf(" --- --- --- \n");
}
