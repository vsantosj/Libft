/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 12:01:46 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/21 21:56:39 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;
	size_t				i;

	if (!dest && !src)
		return (0);
	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (tmp_dest < tmp_src)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			tmp_dest[i] = tmp_src[i];
		}
	}
	return (dest);
}
