/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 19:55:11 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/04 17:24:48 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*len_eq_null(void)
{
	char *res;

	res = (char *)malloc(sizeof(char) * 1);
	res[0] = '\0';
	return (res);
}

static void	start_str(char const *s, size_t *i, size_t *len)
{
	while (s[*i] == ' ' || s[*i] == '\n' || s[*i] == '\t')
	{
		(*i)++;
		(*len)--;
	}
}

char		*ft_strtrim(char const *s)
{
	char	*res;
	size_t	i;
	size_t	len;
	size_t	j;

	if (s == 0)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	if (len == i)
		return (len_eq_null());
	start_str(s, &i, &len);
	if (len <= 0)
		len = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	j = 0;
	if (res == 0)
		return (NULL);
	while (j < len)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
