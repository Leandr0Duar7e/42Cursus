/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/20 17:58:47 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t len);

int	main(void)
{
	char	st1[] = "Firstprimeira";
	char	st2[] = "SecondSegunda";

	printf("\nCompare ft_memset( st1, '#', 5)\n");
	printf("%s\n", ft_memset( st1, '#', 5));
	printf("%s\n",memset( st2, '#', 5));
	printf("Compare ft_memset( st1, '#', 0)\n");
	printf("%s\n", ft_memset( st1, '#', 0));
	printf("%s\n", memset( st2, '#', 0));
	printf("Compare ft_memset( st1, '#', 30)");
	printf("%d\n", ft_memset( st1, '#', 30));
	printf("%d\n", memset( st2, '#', 30));
	printf(" --- --- --- \n");
}
