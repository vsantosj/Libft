/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:19:14 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/10 15:04:14 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	char	*pointer;

	pointer = NULL;
	while (*s)
	{
		if (*s == (char)c)
			pointer = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (pointer);
}
