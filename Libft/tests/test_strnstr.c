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
    printf( "Function:\tft_strnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\tro Ex\n");
    printf( "n:\t12\n");
    printf("Return:\t\t%s\n", ft_strnstr( "Primeiro Exemplo", "ro Ex", 12));
    printf( "Function:\tstrnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\tro Ex\n");
    printf( "n:\t12\n");
    printf("Return:\t\t%s\n", strnstr( "Primeiro Exemplo", "ro Ex", 12));
    printf( "Function:\tft_strnstr\n" );
    printf( "s1:\tSegundo Exemplo\n");
    printf( "s2:\tndo Ex\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%s\n", ft_strnstr( "Segundo Exemplo", "ndo Ex", 8));
    printf( "Function:\tstrnstr\n" );
    printf( "s1:\tSegundo Exemplo\n");
    printf( "s2:\tndo Ex\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%s\n", strnstr( "Segundo Exemplo", "ndo Ex", 8));
    printf( "Function:\tft_strnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\t\n");
    printf( "n:\t16\n");
    printf("Return:\t\t%s\n", ft_strnstr( "Primeiro Exemplo", "", 16));
    printf( "Function:\tstrnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\t\n");
    printf( "n:\t16\n");
    printf("Return:\t\t%s\n", strnstr( "Primeiro Exemplo", "", 16));
    printf( "Function:\tft_strnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\tWhere?\n");
    printf( "n:\t17\n");
    printf("Return:\t\t%s\n", ft_strnstr( "Primeiro Exemplo", "Where?", 17));
    printf( "Function:\tstrnstr\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\tWhere?\n");
    printf( "n:\t17\n");
    printf("Return:\t\t%s\n", strnstr( "Primeiro Exemplo", "Where?", 17));
}
