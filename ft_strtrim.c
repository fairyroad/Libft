/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:49:53 by ygil              #+#    #+#             */
/*   Updated: 2021/06/16 14:55:29 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t  num;

    num = 0;
    while (s[num])
        num++;
    return (num);
}

char    *ft_strchr(const char *str, int c)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)str + i);
        i++;
    }
    if (str[i] == c)
        return ((char *)str + i);
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     start;
    int     end;
    int     i;
    char    *tmp;

    start = 0;
    end = ft_strlen(s1);
    i = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (s1[end] && ft_strchr(set, s1[end]) && start < end)
        end--;
    if (!(tmp = (char*)malloc(sizeof(char*) * (end - start + 1))))
        return (NULL);
    while (start <= end)
        tmp[i] = s1[start];
    tmp[i] = '\0';
    return (tmp);
}
