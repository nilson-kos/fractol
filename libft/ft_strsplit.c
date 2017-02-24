/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 17:26:58 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/04 16:59:57 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		cw(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[i] != '\0' && s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static int		lenslovo(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i + len] != '\0' && s[i + len] != c)
		len++;
	return (len);
}

static char		*prsl(char const *s, char c, int *i)
{
	char	*slovo;
	int		j;

	j = 0;
	slovo = (char *)malloc(sizeof(char) * ((lenslovo(s, c, *i) + 1)));
	if (slovo == 0)
		return (NULL);
	while (s[*i] != '\0' && s[*i] != c)
	{
		slovo[j] = s[*i];
		(*i)++;
		j++;
	}
	slovo[j] = '\0';
	return (slovo);
}

static void		dropchar(char const *s, char c, int *i)
{
	while (s[*i] == c && s[*i] != '\0')
	{
		(*i)++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s == 0 || c == 0)
		return (NULL);
	res = (char **)malloc(sizeof(char*) * (cw(s, c) + 1));
	if (res == 0)
		return (NULL);
	dropchar(s, c, &j);
	while (i < cw(s, c) && s[j] != '\0')
	{
		res[i] = prsl(s, c, &j);
		dropchar(s, c, &j);
		i++;
	}
	res[i] = 0;
	return (res);
}
