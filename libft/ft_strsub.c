/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:52:26 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/29 20:15:20 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if ((arr = ft_strnew(len)) == NULL)
		return (NULL);
	while (len > 0)
	{
		arr[i] = s[start];
		start++;
		i++;
		len--;
	}
	arr[start] = '\0';
	return (arr);
}
