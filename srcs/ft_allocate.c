/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allocate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:31:49 by crossi            #+#    #+#             */
/*   Updated: 2020/11/07 16:31:55 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

char	**ft_populate(char *arg, char **arr, int arg_len, int first_slot)
{
	int		i;
	int		j;
	int		arg_i;

	arg_i = 0;
	i = 0;
	while (i < (arg_len / 3) + first_slot)
	{
		j = 0;
		while (1)
		{
			if (j == 3)
			{
				arr[i++][j] = '\0';
				break ;
			}
			if (i == 0 && j == 0 && (arg_len % 3 == 2))
				arr[i][j++] = '0';
			while (i == 0 && (arg_len % 3 == 1) && j <= 1)
				arr[i][j++] = '0';
			arr[i][j++] = arg[arg_i++];
		}
	}
	return (arr);
}

char	**ft_allocate(char *arg)
{
	int		arr_len;
	int		i;
	int		first_slot;
	char	**arr;

	i = 0;
	arr_len = ft_strlen(arg);
	first_slot = ft_module(arg);
	if (!(arr = (char **)malloc((arr_len / 3 + first_slot) * sizeof(char *))))
		ft_puterror("Allocation Memory Error");
	while (i < (arr_len / 3) + first_slot)
	{
		if (!(arr[i] = (char *)malloc((3 + 1) * sizeof(char))))
		{
			ft_puterror("Allocation Memory Error");
			return (0);
		}
		i++;
	}
	arr = ft_populate(arg, arr, arr_len, first_slot);
	return (arr);
}
