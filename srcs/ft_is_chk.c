/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_chk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okatsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:10:13 by okatsala          #+#    #+#             */
/*   Updated: 2020/11/07 18:36:22 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_module(char *str)
{
	int		module;

	if (ft_strlen(str) % 3 > 0)
		module = 1;
	else
		module = 0;
	return (module);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}
