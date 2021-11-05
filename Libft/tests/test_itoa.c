/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/05 14:23:38 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_itoa\n" );
    printf( "nr:\t\t1573\n");
    printf("Return:\t\t%s\n", ft_itoa(1573));
    printf( "Function:\tft_itoa\n" );
    printf( "nr:\t\t0\n");
    printf("Return:\t\t%s\n", ft_itoa(0));
    printf( "Function:\tft_itoa\n" );
    printf( "nr:\t\t1000\n");
    printf("Return:\t\t%s\n", ft_itoa(1000));
    printf( "Function:\tft_itoa\n" );
    printf( "nr:\t\t540089\n");
    printf("Return:\t\t%s\n", ft_itoa(540089));
}
