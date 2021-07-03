/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:06:32 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 14:01:42 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	char	*tmp;
	char	*s;
	size_t	i;

	if (dest == src)
		return (dest);
	tmp = dest;
	s = (char*)src;
	i = 0;
	while (num--)
	{
		tmp[i] = s[i];
		i++;
	}
	return (tmp);
}
