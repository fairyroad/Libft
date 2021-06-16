/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:18:00 by ygil              #+#    #+#             */
/*   Updated: 2021/06/16 17:02:00 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char        *ft_itoa(int n)
{
    int     num;
    int     flag;
    char    *tmp;

    flag = 0;
    if (n == 0)
        return ("0");
    else if (n == -2147483648)
        return ("-2147483648");
    if (n < 0)
    {
        flag = 1;
        n = -n;
    }
    num = number_of_digits(-n);
    if (!(tmp = (char*)malloc(sizeof(char*) * (flag + num) + 1)))
        return (NULL);
    if (flag == 1)
        tmp[0] = '-';
    tmp[--num] = '\0';
    while (n)
    {
        tmp[num--] = '0' + n % 10;
        n = n / 10;
    }
}
