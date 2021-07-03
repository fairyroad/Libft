/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:10:08 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 14:17:25 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		cnt_arraysize(char const *s, char c)
{
	int		i;
	int		cnt;
	int		flag;

	cnt = 0;
	i = 0;
	flag = 1;
	while (s[i])
	{
		while (s[i] == c && s[i++])
			flag = 1;
		if (flag == 1 && s[i])
			cnt++;
		while (s[i] != c && s[i])
			i++;
		flag = 0;
	}
	return (cnt);
}

static int		cnt_arrayinsize(char const *s, char c, int i)
{
	int		cnt;

	cnt = 0;
	while (s[i] != c && s[i++])
		cnt++;
	return (cnt);
}

static char		*put_arrayinsize(char const *s, int start, int end)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!(tmp = (char*)malloc(sizeof(char) * end + 1)))
		return (NULL);
	while (end)
	{
		tmp[i++] = s[start++];
		end--;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char		**clear_tmp(char **tmp)
{
	unsigned int	i;

	i = 0;
	while (tmp[i])
		free(tmp[i++]);
	free(tmp);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**tmp;
	int		end;
	int		start;
	int		cnt;
	int		j;

	if (!s)
		return (NULL);
	cnt = cnt_arraysize(s, c);
	if (!(tmp = (char**)malloc(sizeof(char*) * (cnt + 1))))
		return (NULL);
	j = 0;
	start = 0;
	while (j < cnt)
	{
		while (s[start] == c && s[start])
			start++;
		end = cnt_arrayinsize(s, c, start);
		if (!(tmp[j++] = put_arrayinsize(s, start, end)))
			return (clear_tmp(tmp));
		start = start + end;
	}
	tmp[j] = NULL;
	return (tmp);
}
