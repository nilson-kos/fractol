/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 20:09:34 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/28 18:17:10 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] != '\0' && j < n)
	{
		s1[i++] = s2[j];
		j++;
	}
	s1[i] = '\0';
	return (s1);
}