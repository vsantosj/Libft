/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:57:11 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/22 04:14:29 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*str, int c, size_t	n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)str;
	i = n;
	while (i > 0)
	{
		i--;
		tmp[i] = (char)c;
	}
	return (str);
}
