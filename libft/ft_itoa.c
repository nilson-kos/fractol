/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 17:28:28 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/04 18:16:52 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int			num_len(int n)
{
	int		len;

	len = 0;
	while (n /= 10)
		len++;
	return (len);
}

char				*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = num_len(n);
	if (n < 0)
		len += 1;
	if ((res = (char *)malloc(sizeof(char) * len + 2)) == NULL)
		return (0);
	res[len + 1] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	while (n)
	{
		if (n < 0)
			res[len--] = '0' - (n % 10);
		else
			res[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (res);
}
