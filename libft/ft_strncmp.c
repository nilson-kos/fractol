/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 18:00:48 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/30 19:42:55 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)(s1);
	s22 = (unsigned char *)(s2);
	if (n == 0)
		return (0);
	i = 0;
	while (s11[i] != '\0' && s22[i] != '\0' && s11[i] == s22[i] && i < n - 1)
		i++;
	return (s11[i] - s22[i]);
}
