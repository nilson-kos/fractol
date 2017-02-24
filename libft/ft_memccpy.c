/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 20:04:26 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/30 20:54:53 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*str_dst;
	const unsigned char	*str_src;

	str_dst = dst;
	str_src = src;
	i = 0;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		if (str_src[i] == (unsigned char)c)
			return (&dst[++i]);
		i++;
	}
	return (NULL);
}
