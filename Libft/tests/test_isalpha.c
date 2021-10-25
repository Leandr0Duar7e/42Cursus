/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/18 18:12:47 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	printf("\nCompare ft_isalpha(9)\n");
	printf("%d\n", ft_isalpha('9'));
	printf("%d\n", isalpha('9'));
	printf("Compare ft_isalpha(f)\n");
	printf("%d\n", ft_isalpha('f'));
	printf("%d\n", isalpha('f'));
	printf(" --- --- --- \n");
}
