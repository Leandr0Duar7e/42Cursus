/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/18 18:25:08 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(void)
{
	printf("\nCompare ft_isalnum(9)\n");
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", isalnum('9'));
	printf("Compare ft_isalnum(f)\n");
	printf("%d\n", ft_isalnum('f'));
	printf("%d\n", isalnum('f'));
	printf("Compare ft_isalnum(?)\n");
	printf("%d\n", ft_isalnum('?'));
	printf("%d\n", isalnum('?'));
	printf(" --- --- --- \n");
}
