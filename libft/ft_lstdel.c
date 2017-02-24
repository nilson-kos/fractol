/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:23:10 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/05 18:24:27 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;
	t_list *nextptr;

	ptr = *alst;
	while (ptr)
	{
		del(ptr->content, ptr->content_size);
		nextptr = ptr->next;
		free(ptr);
		ptr = nextptr;
	}
	ptr = NULL;
	*alst = NULL;
}
