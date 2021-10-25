/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/18 18:16:14 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("\nCompare ft_isdigit(9)\n");
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", isdigit('9'));
	printf("Compare ft_isdigit(f)\n");
	printf("%d\n", ft_isdigit('f'));
	printf("%d\n", isdigit('f'));
	printf(" --- --- --- \n");
}
