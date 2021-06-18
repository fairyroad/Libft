/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:18:00 by ygil              #+#    #+#             */
/*   Updated: 2021/06/18 15:55:25 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int  number_of_digits(int n)
{
    int     num;

    num = 0;
    while (n)
    {
        n = n / 10;
        num++;
    }
    return (num);
}

static int  check_sign(int n)
{
    if (n < 0)
        return (1);
    return (0);
}

char        *ft_itoa(int n)
{
    int     num;
    int     flag;
    char    *tmp;

    if (n == 0)
        return ("0\0");
    else if (n == -2147483648)
        return ("-2147483648\0");
    flag = check_sign(n);
    num = number_of_digits(n) + flag;
    if (!(tmp = (char*)malloc(sizeof(char) * num + 1)))
        return (NULL);
    if (flag == 1)
    {
        tmp[0] = '-';
        n = -n;
    }
    tmp[num--] = '\0';
    while (n)
    {
        tmp[num--] = '0' + n % 10;
        n = n / 10;
    }
    return (tmp);
}
