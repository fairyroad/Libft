/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:23:13 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 15:01:10 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_match(const char *str, const char *substr, size_t len, int j)
{
	int		i;
	int		len_sub;

	i = 0;
	len_sub = 0;
	while (substr[len_sub])
		len_sub++;
	while (str[j] && substr[i] && ((size_t)j < len) && str[j] == substr[i])
	{
		i++;
		j++;
	}
	if (i == len_sub)
		return (1);
	return (0);
}

char		*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	i;
	int		flag;

	i = 0;
	if (substr[i] == '\0')
		return ((char*)str);
	while (str[i])
	{
		if (str[i] == substr[0])
		{
			flag = find_match(str, substr, len, i);
			if (flag == 1)
				return ((char*)str + i);
		}
		i++;
	}
	return (0);
}
