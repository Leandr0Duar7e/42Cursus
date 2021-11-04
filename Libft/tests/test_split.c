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
    printf( "Function:\tft_split\n" );
    printf( "s1:\tPrimeiro Exemplo\n");
    printf( "s2:\tip\n");
    printf("Return:\t\t%s\n", ft_strtrim( "Primeiro Exemplo", "ip"));
    printf( "Function:\tft_strtrim\n" );
    printf( "s1:\tSegundo Exemplo\n");
    printf( "s2:\t123\n");
    printf("Return:\t\t%s\n", ft_strtrim( "Segundo exemplo", "123"));
    printf( "Function:\tft_strtrim\n" );
    printf( "s1:\tTerceiro Exemplo\n");
    printf( "s2:\ti\n");
    printf("Return:\t\t%s\n", ft_strtrim( "Terceiro Exemplo", "i"));
}
