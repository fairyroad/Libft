/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:03:32 by ygil              #+#    #+#             */
/*   Updated: 2021/05/14 13:05:09 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_bzero(void *s, size_t n)
{
	size_t				num;
	unsigned	char	*tmp;

	num = 0;
	tmp = (unsigned char*)s;
	while (num < n)
	{
		tmp[num++] = (unsigned char)0;
	}
	return (s);
}
