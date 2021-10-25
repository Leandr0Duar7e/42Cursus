/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/20 15:08:11 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("\nCompare ft_isascii(9)\n");
	printf("%d\n", ft_isascii(9));
	printf("%d\n", isascii(9));
	printf("Compare ft_isascii(200)\n");
	printf("%d\n", ft_isascii(200));
	printf("%d\n", isascii(200));
	printf("Compare ft_isascii(-10)\n");
	printf("%d\n", ft_isascii(-10));
	printf("%d\n", isascii(-10));
	printf(" --- --- --- \n");
}
