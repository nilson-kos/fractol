/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:13:17 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/30 20:49:28 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int				i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)(s1);
	s22 = (unsigned char *)(s2);
	i = 0;
	if (s11 && s22)
	{
		if (ft_strlen((char *)s11) != ft_strlen((char *)s22))
			return (0);
		while (s11[i] != '\0' && s22[i] != '\0')
		{
			if (s11[i] == s22[i])
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
