/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_engine.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:44:43 by crossi            #+#    #+#             */
/*   Updated: 2020/11/08 19:44:45 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_engine_nest(char *digits, char **dictionary, int counter_rows)
{
	int		j;

	j = 0;
	while (j < 3)
	{
		if (digits[j] != '0')
		{
			if (j == 0)
				ft_first_digit(dictionary, digits[j], counter_rows);
			if (j == 1)
				ft_second_digit(dictionary, digits, counter_rows);
			if (j == 2 && digits[1] != '1')
				ft_third_digit(dictionary, digits[j], counter_rows);
		}
		j++;
	}
}

int		ft_engine(char *dictionary, char *str)
{
	char	**arr;
	char	**array;
	int		j;
	int		counter_rows;
	int		i;

	i = 0;
	j = 0;
	arr = ft_allocate(str);
	array = ft_copy_dict_array(dictionary);
	counter_rows = ft_counter_rows(ft_read_dict(dictionary));
	if (arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0')
	{
		ft_read_words(ft_strstr(array, counter_rows, "0"));
		return (0);
	}
	while (i < (ft_strlen(str) / 3 + ft_module(str)))
	{
		ft_engine_nest(arr[i], array, counter_rows);
		if (ft_strcmp(arr[i++], "000") != 0)
			ft_ord(array, counter_rows, ft_strlen(str) / 3 + ft_module(str), i);
	}
	free(arr);
	free(array);
	return (0);
}
