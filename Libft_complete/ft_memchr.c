/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:24:11 by ygil              #+#    #+#             */
/*   Updated: 2021/06/17 18:35:58 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memchr(void *src,
		int value, size_t n)
{
	size_t				i;
	unsigned char		*tmp;
	unsigned char		c;

	i = 0;
	c = (unsigned char)value;
	tmp = (unsigned char*)src;
	while (i < n)
	{
		if (c == tmp[i])
			return (tmp + i);
		i++;
	}
	return (NULL);
}
