/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 15:12:22 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 15:46:07 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (lst == NULL || f == NULL)
		return (NULL);
	tmp2 = NULL;
	while (lst)
	{
		if (!(tmp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&tmp2, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp2, tmp);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (tmp2);
}
