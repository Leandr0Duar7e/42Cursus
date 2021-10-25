/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/22 13:58:26 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_toupper\n" );
    printf( "Source:\t\ta\n");
    printf("Return:\t\t%c\n", ft_toupper('a'));
	printf( "Function:\ttoupper\n" );
    printf( "Source:\t\ta\n");
    printf("Return:\t\t%c\n", toupper('a'));
    printf( "Function:\tft_toupper\n" );
    printf( "Source:\t\tA\n");
    printf("Return:\t\t%c\n", ft_toupper('A'));
	printf( "Function:\ttoupper\n" );
    printf( "Source:\t\tA\n");
    printf("Return:\t\t%c\n", toupper('A'));
    printf( "Function:\tft_toupper\n" );
    printf( "Source:\t\t#\n");
    printf("Return:\t\t%c\n", ft_toupper('#'));
	printf( "Function:\ttoupper\n" );
    printf( "Source:\t\t#\n");
    printf("Return:\t\t%c\n", toupper('#'));
}
