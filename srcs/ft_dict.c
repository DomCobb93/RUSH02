/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asalvemi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:22:18 by asalvemi          #+#    #+#             */
/*   Updated: 2020/11/08 13:22:20 by asalvemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		ft_read_words(char *str)
{
	unsigned int	i;

	i = 0;
	if (!str[0])
		return (0);
	while (!(str[i] >= 'a' && str[i] <= 'z') ||
	(str[i] >= 'A' && str[i] <= 'Z'))
	{
		i++;
	}
	while ((str[i] >= 'a' && str[i] <= 'z') ||
	(str[i] >= 'A' && str[i] <= 'Z'))
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
