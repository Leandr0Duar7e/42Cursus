/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/20 15:22:35 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c);

int	main(void)
{
	printf("\nCompare ft_isprint(d)\n");
	printf("%d\n", ft_isprint('d'));
	printf("%d\n", isprint('d'));
	printf("Compare ft_isprint(127)\n");
	printf("%d\n", ft_isprint(127));
	printf("%d\n", isprint(127));
	printf("Compare ft_isprint(15)\n");
	printf("%d\n", ft_isprint(15));
	printf("%d\n", isprint(15));
	printf(" --- --- --- \n");
}
