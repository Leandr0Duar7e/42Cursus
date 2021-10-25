/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 17:35:26 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_memcmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIguais\n");
    printf( "n:\t6\n");
    printf("Return:\t\t%d\n", ft_memcmp( "Iguais", "Iguais", 6));
    printf( "Function:\tmemcmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIguais\n");
    printf( "n:\t6\n");
    printf("Return:\t\t%d\n", memcmp( "Iguais", "Iguais", 6));
    printf( "Function:\tft_memcmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIgu3is\n");
    printf( "n:\t6\n");
    printf("Return:\t\t%d\n", ft_memcmp( "Iguais", "Igu3is", 6));
    printf( "Function:\tmemcmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIgu3is\n");
    printf( "n:\t6\n");
    printf("Return:\t\t%d\n", memcmp( "Iguais", "Igu3is", 6));
    printf( "Function:\tft_memcmp\n" );
    printf( "s1:\t\n");
    printf( "s2:\t\n");
    printf( "n:\t0\n");
    printf("Return:\t\t%d\n", ft_memcmp( "", "", 0));
    printf( "Function:\tmemcmp\n" );
    printf( "s1:\t\n");
    printf( "s2:\t\n");
    printf( "n:\t0\n");
    printf("Return:\t\t%d\n", memcmp( "", "", 0));
}
