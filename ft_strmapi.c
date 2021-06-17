/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:34:32 by ygil              #+#    #+#             */
/*   Updated: 2021/06/17 14:42:10 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    size_t  len_s;
    char    *tmp;

    i = 0;
    len_s = ft_strlen(s);
    if (!s[i])
        return (NULL);
    if (!(tmp = (char*)malloc(sizeof(char) * (len_s + 1))))
        return (NULL);
    while (s[i])
    {
        tmp[i] = f(i, s[i]);
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}
