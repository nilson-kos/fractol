/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:36:23 by kshcherb          #+#    #+#             */
/*   Updated: 2016/11/28 18:07:55 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s11;
	unsigned char	*s22;

	s11 = (unsigned char *)(s1);
	s22 = (unsigned char *)(s2);
	i = 0;
	while (s11[i] != '\0' && s22[i] != '\0' && s11[i] == s22[i])
		i++;
	return (s11[i] - s22[i]);
}
