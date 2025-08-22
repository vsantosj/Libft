/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:14:05 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/18 14:40:24 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	i = 0;
	while (big[i] && (i + little_len <= len))
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] && little[j])
			{
				if (big[i + j] != little[j])
					break ;
				else if (j == little_len -1)
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
