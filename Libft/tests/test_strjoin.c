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
    printf( "Function:\tft_strjoin\n" );
    printf( "s1:\tPrimeiro \n");
    printf( "s2:\tExemplo\n");
    printf("Return:\t\t%s\n", ft_strjoin( "Primeiro ", "Exemplo"));
    printf( "Function:\tft_strjoin\n" );
    printf( "s1:\t\n");
    printf( "s2:\tExemplo\n");
    printf("Return:\t\t%s\n", ft_strjoin( "", "Exemplo"));
    printf( "Function:\tft_strjoin\n" );
    printf( "s1:\t\n");
    printf( "s2:\t\n");
    printf("Return:\t\t%s\n", ft_strjoin( "", ""));
}
