/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/20 18:17:54 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *str, size_t n);

int	main(void)
{
	char	st1[] = "Firstprimeira";
	char	st2[] = "SecondSegunda";

	printf("\nCompare ft_bzero( st1, 5)\n");
	ft_bzero( st1, 5);
	printf("%s\n", st1);
	bzero( st2, 5);
	printf("%s\n", st2);
	printf("Compare ft_bzero( st1, 0)\n");
	ft_bzero( st1, 0);
	printf("%s\n", st1);
	bzero( st2, 0);
	printf("%s\n", st2);
	printf("Compare ft_bzero( st1, 30)");
	ft_bzero(st1, 30);
	printf("%d\n", st1);
	bzero( st2, 30);
	printf("%d\n", st2);
	printf(" --- --- --- \n");
}
