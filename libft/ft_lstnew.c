/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:07:52 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/05 18:17:33 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*lstnew;
	unsigned char	*ptr;
	unsigned char	*newptr;
	size_t			i;

	ptr = (unsigned char *)content;
	if (!(lstnew = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lstnew->content = (unsigned char *)malloc(sizeof(content_size));
	if (content == NULL)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	else
	{
		lstnew->content_size = content_size;
		newptr = (unsigned char *)(lstnew->content);
		i = -1;
		while (++i < content_size)
			newptr[i] = ptr[i];
		lstnew->next = NULL;
	}
	return (lstnew);
}
