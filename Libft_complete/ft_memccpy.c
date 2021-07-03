/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:32:33 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 14:03:30 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void						*ft_memccpy(void *dest, const void *src,
		int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*s;
	size_t			i;

	tmp = (unsigned char*)dest;
	s = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		tmp[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (tmp + i + 1);
		i++;
	}
	return (NULL);
}
