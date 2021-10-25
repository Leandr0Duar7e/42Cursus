/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 16:42:56 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_memchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tE\n");
    printf( "n:\t4\n");
    printf("Return:\t\t%s\n", ft_memchr( "Exemplo", 'E', 4));
    printf( "Function:\tmemchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tE\n");
    printf( "n:\t4\n");
    printf("Return:\t\t%s\n", memchr( "Exemplo", 'E', 4));
    printf( "Function:\tft_memchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tp\n");
    printf( "n:\t4\n");
    printf("Return:\t\t%s\n", ft_memchr( "Exemplo", 'p', 4));
    printf( "Function:\tmemchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tp\n");
    printf( "n:\t4\n");
    printf("Return:\t\t%s\n", memchr( "Exemplo", 'p', 4));
    printf( "Function:\tft_memchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tt\n");
    printf( "n:\t10\n");
    printf("Return:\t\t%s\n", ft_memchr( "Exemplo", 't', 10));
    printf( "Function:\tmemchr\n" );
    printf( "s:\tExemplo\n");
	printf("char:\tt\n");
    printf( "n:\t10\n");
    printf("Return:\t\t%s\n", memchr( "Exemplo", 't', 10));
}
