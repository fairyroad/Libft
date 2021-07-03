/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:53:19 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 14:04:20 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t num;

	i = 0;
	num = size - 1;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && num > 0)
	{
		dst[i] = src[i];
		i++;
		num--;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
