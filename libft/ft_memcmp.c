/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:33:30 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/01 21:11:16 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = ((unsigned char *)s1);
	s22 = ((unsigned char *)s2);
	if (n == 0)
		return (0);
	while (s11[i] == s22[i] && i < n - 1)
	{
		i++;
	}
	return ((int)(s11[i] - s22[i]));
}
