/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 14:56:36 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str1[50] = "FirstExample";

    printf( "Function:\tft_strchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\tF\n");
    printf("Return:\t\t%s\n", ft_strchr( str1, 'F'));
	printf( "Function:\tstrchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\tF\n");
    printf("Return:\t\t%s\n", strchr( str1, 'F'));
    printf( "Function:\tft_strchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\ts\n");
    printf("Return:\t\t%s\n", ft_strchr( str1, 's'));
	printf( "Function:\tstrchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\ts\n");
    printf("Return:\t\t%s\n", strchr( str1, 's'));
    printf( "Function:\tft_strchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\t\\0\n");
    printf("Return:\t\t%s\n", ft_strchr( str1, '\0'));
	printf( "Function:\tstrchr\n" );
    printf( "Source:\t\t%s\n", str1 );
    printf( "Char:\t\\0\n");
    printf("Return:\t\t%s\n", strchr( str1, '\0'));
}
