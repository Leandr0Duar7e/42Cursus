/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/20 15:44:10 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str);

int	main(void)
{
	printf("\nCompare ft_strlen(word5)\n");
	printf("%d\n", ft_strlen("word5"));
	printf("%d\n", strlen("word5"));
	printf("Compare ft_strlen(" ")\n");
	printf("%d\n", ft_strlen(" "));
	printf("%d\n", strlen(" "));
	printf("Compare ft_srtlen(./[{-6)\n");
	printf("%d\n", ft_strlen("./[{-6"));
	printf("%d\n", strlen("./[{-6"));
	printf(" --- --- --- \n");
}
