/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:01:05 by crossi            #+#    #+#             */
/*   Updated: 2020/11/07 16:01:09 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		main(int argc, char **argv)
{
	char	**arr;

	if (!(ft_error(argc, argv[1])))
	{
		ft_puterror("Error\n");
		return (0);
	}
	arr = ft_allocate(argv[1]);
	int i = 0;
	while (arr[1][i])
	{
		//printf("QUI1\n");
		printf("%c\n", arr[1][i]);
		i++;
	}
}

