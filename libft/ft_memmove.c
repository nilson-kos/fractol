/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 20:36:24 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/27 20:55:06 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = ((unsigned char *)dst);
	src1 = ((unsigned char *)src);
	if (src1 < dst1)
	{
		dst1 = dst1 + len - 1;
		src1 = src1 + len - 1;
		while (len--)
			*(dst1--) = *(src1--);
		return (dst);
	}
	while (len--)
		*(dst1++) = *(src1++);
	return (dst);
}
