/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 12:35:38 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str1[50] = "FirstExample";
    char str2[50] = "Second";

    printf( "Function:\tft_strlcpy\n" );
    printf( "Source:\t\t%s\n", str2 );
    printf( "Destination:\t%s\n", str1);
    printf("Return:\t\t%zu\n", ft_strlcpy(str1, str2, 11));
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%lu characters\n\n", strlen( str1 ) );
    printf( "Function:\tstrlcpy\n" );
    printf("Return:\t\t%zu\n", strlcpy(str1, str2, 11)); 
}
