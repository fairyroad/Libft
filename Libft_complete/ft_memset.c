/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:41:12 by ygil              #+#    #+#             */
/*   Updated: 2021/05/14 12:51:22 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned	char	*tmp;

	tmp = (unsigned	char*)s;
	i = 0;
	while (i < n)
	{
		tmp[i++] = c;
	}
	return (s);
}
