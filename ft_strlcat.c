/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:55:41 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 15:51:57 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s1)
{
    size_t i;

    i = 0;
    while (s1[i])
        i++;
    return (i);
}
size_t  ft_strlcat(char *dst, const char *src, size_t size)
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

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    char *dest = (char *)malloc(sizeof(char) * 15);
    dest[14] = 'a';
    memset(dest, 0, 15);
    memset(dest, 'r', 6);

    char *src = "lorem ipsum dolor sit amet";
    size_t size = 15;
    size_t tmp = ft_strlcat(dest, src, size);
    printf("%zu\n", tmp);
    printf("%s", dest);
}
