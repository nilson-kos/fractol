/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 19:38:34 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/27 19:43:32 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*v;
	size_t			i;

	v = b;
	i = 0;
	while (i < len)
	{
		v[i] = c;
		i++;
	}
	return ((void *)v);
}
