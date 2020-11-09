/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:27:32 by crossi            #+#    #+#             */
/*   Updated: 2020/11/08 14:27:37 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	*ft_strstr(char **str_array, int array_l, char *to_find)
{
	int		str_i;
	int		find_i;
	int		index;

	str_i = 0;
	index = 0;
	find_i = 0;
	while (str_i < array_l)
	{
		while (to_find[find_i] && (to_find[find_i] == str_array[str_i][index]))
		{
			find_i++;
			index++;
			if (str_array[str_i][index] == ':' && to_find[find_i] == '\0')
			{
				return (str_array[str_i]);
			}
		}
		str_i++;
		find_i = 0;
		index = 0;
	}
	return (0);
}
