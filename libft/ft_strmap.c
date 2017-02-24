/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:41:22 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/30 20:48:46 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	if (s != 0)
	{
		j = ft_strlen(s);
		s1 = (char *)(malloc(sizeof(char) * (j + 1)));
		if (f && s1 != 0)
		{
			while (s[i] != 0)
			{
				s1[i] = f(s[i]);
				i++;
			}
			s1[i] = '\0';
			return (s1);
		}
	}
	return (NULL);
}
