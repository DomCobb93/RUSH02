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
	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		ft_engine("numbers.dict", argv[1]);
	}
	else if (argc == 3)
	{
		if (!(ft_error(argc, argv[2])))
			return (0);
		ft_engine(argv[1], argv[2]);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
}
