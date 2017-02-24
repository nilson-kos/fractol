/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:06:16 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/29 19:11:43 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					j;
	char				*s1;

	i = 0;
	if (s != 0)
	{
		j = ft_strlen(s);
		s1 = (char *)(malloc(sizeof(char) * (j + 1)));
		if (f && s1 != 0)
		{
			while (s[i] != 0)
			{
				s1[i] = f(i, s[i]);
				i++;
			}
			s1[i] = '\0';
			return (s1);
		}
	}
	return (NULL);
}
