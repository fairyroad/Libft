/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:10:08 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 16:05:09 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      cnt_arraysize(char const *s, char c)
{
    int     i;
    int     cnt;

    cnt = 0;
    i = 0;
    while (s[i])
    {
        if (s[i++] == c)
            cnt++;
    }
    return (cnt);
}

static int      cnt_arrayinsize(char const *s, char c, int i)
{
    int     cnt;

    cnt = 0;
    while (s[i])
    {
        if (s[i++] == c)
            break ;
        cnt++;
    }
    return (cnt);
}

static char     **clear_tmp(char    **tmp)
{
    unsigned int    i;

    i = 0;
    while (tmp[i])
        free(tmp[i++]);
    free(tmp);
    return (NULL);
}

char            **ft_split(char const *s, char c)
{
    char    **tmp;
    int     i;
    int     idx;
    int     cnt;
    int     j;

    cnt = cnt_arraysize(s, c);
    if (c == ' ')
        return (NULL);
    if (!(tmp = (char**)malloc(sizeof(char*) * (cnt + 1) + 1)))
        return (NULL);
    j = 0;
    idx = -1;
    while (j <= cnt)
    {
        if (!(tmp[j] = (char*)malloc(sizeof(char)
                        * (cnt_arrayinsize(s, c, ++idx) + 1))))
            return (clear_tmp(tmp));
        i = 0;
        while (s[idx] && s[idx] != c)
            tmp[j][i++] = s[idx];
        tmp[j++][i] = '\0';
    }
    tmp[j++] = NULL;
    return (tmp);
}

#include <stdio.h>

int     main(void)
{
    int i = 0;
    char **tab;

    tab = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse", ' ');
    while (tab[i] != NULL)
    {
        printf("string %d : %s\n", i, tab[i]);
        i++;
    }
    return (0);
}
