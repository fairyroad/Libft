/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:20:56 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 15:32:31 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		j;
	char	*s;

	i = ft_strlen(str);
	j = 0;
	s = (char*)str;
	if ((char)c == '\0')
		return (s + ft_strlen(str));
	while (i > 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	if (s[i] == c)
		return (s);
	return (NULL);
}
