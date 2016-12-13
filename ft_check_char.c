/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 12:37:00 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/13 12:12:46 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_check_rows(char *str)
{
	int		i;

	i = -1;
	while (++i < 4)
		if (!(str[i] == '.' || str[i] == '#'))
			return (0);
	return (1);
}

static int		ft_check_end_line(char c)
{
	if (c == '\n')
		return (1);
	return (0);
}

int				ft_check_char(char *pieces)
{
	int		i;
	int		rows;

	i = 0;
	rows = 1;
	while (pieces[i])
	{
		if (rows % 5 == 0)
			if (ft_check_end_line(pieces[i]))
				i++;
			else
				return (0);
		else
		{
			if (!(ft_check_rows(&pieces[i])) 
				&& !(ft_check_end_line(pieces[i + 1])))
				return (0);
			i += 5;
		}
		rows++;
	}
	return (1);
}
