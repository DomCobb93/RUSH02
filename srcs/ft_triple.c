/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:19:42 by crossi            #+#    #+#             */
/*   Updated: 2020/11/08 18:19:44 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_first_digit(char **array, char digit, int counter_rows)
{
	char	tmp[3];

	tmp[0] = digit;
	tmp[1] = '\0';
	ft_read_words(ft_strstr(array, counter_rows, tmp));
	write(1, " ", 1);
	ft_read_words(ft_strstr(array, counter_rows, "100"));
	write(1, " ", 1);
}

void	ft_second_digit(char **array, char *digits, int counter_rows)
{
	char	tmp[3];
	int		j;

	j = 1;
	tmp[0] = digits[j];
	if (tmp[0] == '1')
		tmp[1] = digits[j + 1];
	else
		tmp[1] = '0';
	tmp[2] = '\0';
	ft_read_words(ft_strstr(array, counter_rows, tmp));
	write(1, " ", 1);
}

void	ft_third_digit(char **array, char digit, int counter_rows)
{
	char	tmp[3];

	tmp[0] = digit;
	tmp[1] = '\0';
	ft_read_words(ft_strstr(array, counter_rows, tmp));
	write(1, " ", 1);
}

void	ft_ord(char **array, int counter_rows, int max, int i)
{
	char	ord[38];
	int		o;
	int		k;

	o = 1;
	k = 1;
	while (o <= max - i)
	{
		ord[0] = '1';
		ord[k++] = '0';
		ord[k++] = '0';
		ord[k++] = '0';
		ord[k] = '\0';
		o++;
	}
	if (i != max)
	{
		ft_read_words(ft_strstr(array, counter_rows, ord));
		write(1, " ", 1);
	}
}
