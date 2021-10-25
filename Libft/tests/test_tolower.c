/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 14:02:07 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_tolower\n" );
    printf( "Source:\t\ta\n");
    printf("Return:\t\t%c\n", ft_tolower('a'));
	printf( "Function:\ttolower\n" );
    printf( "Source:\t\ta\n");
    printf("Return:\t\t%c\n", tolower('a'));
    printf( "Function:\tft_tolower\n" );
    printf( "Source:\t\tA\n");
    printf("Return:\t\t%c\n", ft_tolower('A'));
	printf( "Function:\ttolower\n" );
    printf( "Source:\t\tA\n");
    printf("Return:\t\t%c\n", tolower('A'));
    printf( "Function:\tft_tolower\n" );
    printf( "Source:\t\t#\n");
    printf("Return:\t\t%c\n", ft_tolower('#'));
	printf( "Function:\ttolower\n" );
    printf( "Source:\t\t#\n");
    printf("Return:\t\t%c\n", tolower('#'));
}
