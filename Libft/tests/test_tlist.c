/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:12:08 by leolivei          #+#    #+#             */
/*   Updated: 2021/11/10 14:20:46 by leolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*new;

	new = ft_lstnew("Primeiro Exemplo");
	ft_lstadd_front(&new, ft_lstnew("Segundo Exemplo"));
	ft_lstadd_back(&new, ft_lstnew("Terceiro Exemplo"));
	printf("%d\n", ft_lstsize(new));
	printf("%s\n", ft_lstlast(new)->content);
}
