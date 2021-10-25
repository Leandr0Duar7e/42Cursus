/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:13:33 by leolivei          #+#    #+#             */
/*   Updated: 2021/10/25 14:05:30 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
    printf( "Function:\tft_strncmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIguais\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%d\n", ft_strncmp( "Iguais", "Iguais", 8));
    printf( "Function:\tstrncmp\n" );
    printf( "s1:\tIguais\n");
    printf( "s2:\tIguais\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%d\n", strncmp( "Iguais", "Iguais", 8));
    printf( "Function:\tft_strncmp\n" );
    printf( "s1:\t123af123\n");
    printf( "s2:\t123cg1234567\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%d\n", ft_strncmp( "123af123", "123cg1234567", 8));
    printf( "Function:\tstrncmp\n" );
    printf( "s1:\t123af123\n");
    printf( "s2:\t123cg1234567\n");
    printf( "n:\t8\n");
    printf("Return:\t\t%d\n", strncmp( "123af123", "123cg1234567", 8));
}
