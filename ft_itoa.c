/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 20:41:24 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/22 01:11:05 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	count_digit;

	count_digit = 0;
	if (n <= 0)
	{
		count_digit++;
		n = -n;
	}
	while (n != 0)
	{
		count_digit++;
		n /= 10;
	}
	return (count_digit);
}

char	*ft_itoa(int n)
{
	int		count_digit;
	long	num;
	char	*str_number;
	int		i;

	num = n;
	count_digit = ft_count_digit(n);
	str_number = ft_calloc(count_digit + 1, sizeof(char));
	if (!str_number)
		return (0);
	i = count_digit - 1;
	if (num == 0)
		str_number[0] = '0';
	if (num < 0)
	{
		str_number[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str_number[i--] = (num % 10) + '0';
		num /= 10;
	}
	return (str_number);
}
