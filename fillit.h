/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 13:59:56 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/14 11:51:58 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libft/libft.h"

char	*ft_read_file(char *str);
int		ft_check_square(char *str, int points);
int		ft_check_pieces(char *str);
int		ft_check_char(char *str);
int		ft_launch_test(char *str);
int		ft_launch_resolve(char *str);

#endif
