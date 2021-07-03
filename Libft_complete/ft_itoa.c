/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:18:00 by ygil              #+#    #+#             */
/*   Updated: 2021/06/22 12:40:22 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	number_of_digits(int n)
{
	int		num;

	num = 0;
	while (n)
	{
		n = n / 10;
		num++;
	}
	return (num);
}

static int	check_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static char	*zero_print(void)
{
	char	*tmp;

	if (!(tmp = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	tmp[0] = '0';
	tmp[1] = '\0';
	return (tmp);
}

static char	*min_print(void)
{
	char	*tmp;
	int		i;

	if (!(tmp = (char*)malloc(sizeof(char) * 12)))
		return (NULL);
	i = 0;
	tmp[0] = '-';
	while (i < 10)
	{
		tmp[i + 1] = "2147483648"[i];
		i++;
	}
	tmp[11] = '\0';
	return (tmp);
}

char		*ft_itoa(int n)
{
	int		num;
	int		flag;
	char	*tmp;

	if (n == 0)
		return (zero_print());
	else if (n == -2147483648)
		return (min_print());
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
