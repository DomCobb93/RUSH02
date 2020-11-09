/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:06:55 by crossi            #+#    #+#             */
/*   Updated: 2020/11/08 19:06:57 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(src);
	if ((dest = (char *)malloc(src_len * sizeof(char) + 1)) == NULL)
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
