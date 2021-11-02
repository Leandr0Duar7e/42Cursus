/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/02 14:38:17 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_atoi\n" );
    printf( "s:\t 	-325\n");
    printf("Return:\t\t%d\n", ft_atoi( " 	-325"));
    printf( "Function:\tatoi\n" );
    printf( "s:\t 	-325\n");
    printf("Return:\t\t%d\n", atoi( " 	-325"));
    printf( "Function:\tft_atoi\n" );
    printf( "s:\t325\n");
    printf("Return:\t\t%d\n", ft_atoi("325"));
    printf( "Function:\tatoi\n" );
    printf( "s:\t325\n");
    printf("Return:\t\t%d\n", atoi( "325"));
    printf( "Function:\tft_atoi\n" );
    printf( "s:\t--42\n");
    printf("Return:\t\t%d\n", ft_atoi( "--42"));
    printf( "Function:\tatoi\n" );
    printf( "s:\t--42\n");
    printf("Return:\t\t%d\n", atoi( "--42"));
    printf( "Function:\tft_atoi\n" );
    printf( "s:\t as56\n");
    printf("Return:\t\t%d\n", ft_atoi( "as56"));
    printf( "Function:\tatoi\n" );
    printf( "s:\tas56\n");
    printf("Return:\t\t%d\n", atoi( "as56"));
    printf( "Function:\tft_atoi\n" );
    printf( "s:\t+423f54\n");
    printf("Return:\t\t%d\n", ft_atoi( "+423f54"));
    printf( "Function:\tatoi\n" );
    printf( "s:\t+423f54\n");
    printf("Return:\t\t%d\n", atoi( "+423f54"));

}
