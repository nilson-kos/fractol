/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 19:11:56 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/05 20:01:23 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_revstr(char *c)
{
	size_t	i;
	size_t	j;
	char	*res;

	j = 0;
	i = 0;
	while (c[i])
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	res[i] = '\0';
	while (i > 0)
	{
		res[j] = c[i - 1];
		j++;
		i--;
	}
	return (res);
}
