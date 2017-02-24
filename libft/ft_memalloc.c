/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:49:22 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/29 18:01:50 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (void *)(malloc(sizeof(void) * size));
	if (s == 0)
		return ((void *)0);
	while (i <= size)
	{
		s[i] = '\0';
		i++;
	}
	return ((void *)s);
}
