/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:46:21 by ygil              #+#    #+#             */
/*   Updated: 2021/07/03 14:48:28 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	i = start;
	j = 0;
	if (s == NULL)
		return (NULL);
	else if (ft_strlen(s) < start + len)
	{
		if (!(tmp = (char*)malloc(sizeof(char) * 1)))
			return (NULL);
		tmp[0] = '\0';
		return (tmp);
	}
	if (!(tmp = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len--)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
