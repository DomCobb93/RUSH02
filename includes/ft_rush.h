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

void	ft_puterror(char *err);
int		ft_strlen(char *str);

int		ft_is_number(char *str);
int		ft_module(char *str);
int		ft_error(int argc, char *str);

char	**ft_allocate(char *arg);
char	**ft_populate(char *arg, char **arr, int arg_len, int first_slot);
char	*ft_strstr(char **str_array, int array_l, char *to_find);
int		ft_read_words(char *str);

void	ft_first_digit(char **array, char digit, int counter_rows);
void	ft_second_digit(char **array, char *digits, int counter_rows);
void	ft_third_digit(char **array, char digit, int counter_rows);
void	ft_ord(char **array, int counter_rows, int max, int i);

char	*ft_read_dict(char *dictionary);
int		ft_counter_rows(char *buf);
char	**ft_alloc_array(char *buf);
char	**ft_copy_dict_array(char *dictionary);

char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

int		ft_engine(char *dictionary, char *str);
void	ft_engine_nest(char *digits, char **dictionary, int counter_rows);

#endif
