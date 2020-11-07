/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okatsala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 10:46:43 by okatsala          #+#    #+#             */
/*   Updated: 2020/11/07 18:34:04 by crossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterror(char *err);
int		ft_strlen(char *str);

int		ft_is_digit(char c);
int		ft_is_space(char c);
int		ft_is_number(char *str);
int		ft_is_printable(char c);
int		ft_module(char *str);
int		ft_error(int argc, char *str);

char	**ft_allocate(char *arg);
char	**ft_populate(char *arg, char **arr, int arg_len, int first_slot);

#endif
