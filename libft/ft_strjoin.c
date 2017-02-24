/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 19:53:00 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/02 19:50:53 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	len = (ft_strlen(s1)) + (ft_strlen(s2));
	if ((res = (char *)(malloc(sizeof(char) * (len + 1)))) == 0)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
