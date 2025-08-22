/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivsanto <vivsanto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:24:08 by vivsanto          #+#    #+#             */
/*   Updated: 2025/08/22 01:15:47 by vivsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_str;

	if (!s1 || !s2)
		return (NULL);
	len_str = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = ft_calloc(len_str, sizeof(char));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, len_str);
	ft_strlcat(new_str, s2, len_str);
	return (new_str);
}
