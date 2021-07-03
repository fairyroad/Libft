/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:55:41 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 15:52:47 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len_dst;
	size_t len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size < len_dst + 1)
		return (size + len_src);
	if (size > len_dst + 1)
	{
		while ((i + 1 + len_dst < size) && src[i] != '\0')
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
