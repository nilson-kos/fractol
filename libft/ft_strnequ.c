/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:48:43 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/29 19:51:10 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)(s1);
	s22 = (unsigned char *)(s2);
	i = 0;
	if (s11 && s22)
	{
		while (s11[i] != '\0' && s22[i] != '\0' && i < n - 1)
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
