/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:49:53 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 18:52:52 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tmp;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && start < end)
		end--;
	if (!(tmp = (char*)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(tmp, &s1[start], end - start + 1);
	return (tmp);
}
