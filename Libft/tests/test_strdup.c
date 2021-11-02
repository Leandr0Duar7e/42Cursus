/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:41 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/02 15:40:20 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_strdup\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf("Return:\t\t%s\n", ft_strdup( "Primeiro Exemplo"));
    printf( "Function:\tatoi\n" );
    printf( "s:\tPrimeiro Exemplo\n");
    printf("Return:\t\t%s\n", strdup("Primeiro Exemplo"));
}
