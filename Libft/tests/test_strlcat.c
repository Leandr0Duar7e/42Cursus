/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 12:51:41 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str1[50] = "FirstExample";
    char str2[50] = "Second";
	char str3[50] = "FirstExample";

    printf( "Function:\tft_strlcat\n" );
    printf( "Source:\t\t%s\n", str2 );
    printf( "Destination:\t%s\n", str1);
    printf("Return:\t\t%zu\n", ft_strlcat( str1, str2, 14));
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );
    printf( "Function:\tstrlcat\n" );
    printf( "Source:\t\t%s\n", str2 );
    printf( "Destination:\t%s\n", str3);
    printf("Return:\t\t%zu\n", strlcat( str3, str2, 14));
    printf( "Result:\t\t%s\n", str3 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str3 ) );

}
