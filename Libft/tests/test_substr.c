/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/02 12:41:50 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_substr\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf( "start:\t10\n");
    printf( "len:\t20\n");
    printf("Return:\t\t%s\n", ft_substr( "Primeiro Exemplo", 10, 20));
    printf( "Function:\tft_substr\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf( "start:\t2\n");
    printf( "len:\t3\n");
    printf("Return:\t\t%s\n", ft_substr( "Primeiro Exemplo", 2, 3));
    printf( "Function:\tft_substr\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf( "start:\t30\n");
    printf( "len:\t20\n");
    printf("Return:\t\t%s\n", ft_substr( "Primeiro Exemplo", 30, 20));
    printf( "Function:\tft_substr\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf( "start:\t1\n");
    printf( "len:\t8\n");
    printf("Return:\t\t%s\n", ft_substr( "Primeiro Exemplo", 1, 8));
}
