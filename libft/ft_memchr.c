/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:17:43 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/28 18:05:27 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	c1 = ((unsigned char)c);
	s1 = ((unsigned char *)s);
	while (i < n)
	{
		if (s1[i] == c1)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}
