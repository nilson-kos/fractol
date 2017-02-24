/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:32:43 by kshcherb          #+#    #+#             */
/*   Updated: 2016/12/05 18:34:25 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ptr;
	t_list *newlst;
	t_list *p_newlst;

	if (lst == NULL)
		return (NULL);
	ptr = lst;
	newlst = f(ptr);
	if (newlst == NULL)
		return (NULL);
	p_newlst = newlst;
	while (ptr->next)
	{
		ptr = ptr->next;
		p_newlst->next = f(ptr);
		if (p_newlst->next == NULL)
			return (NULL);
		p_newlst = p_newlst->next;
	}
	return (newlst);
}
