/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:03:11 by ygil              #+#    #+#             */
/*   Updated: 2021/06/17 15:28:23 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_calloc(size_t cnt, size_t size)
{
	void			*tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * cnt * size)))
		return (NULL);
	ft_memset(tmp, 0, cnt * size);
	return (tmp);
}
