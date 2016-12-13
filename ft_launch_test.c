/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:07:11 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/13 16:06:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		launch_test(char *piece, int (*test[1])(char *, int))
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (*piece)
	{
		if (*piece == '#')
		{
			while ((test[i](piece, count)) == 0)
		}
		else if (*piece == '.')
			count++;
		else
			count = 0;
		piece++;
	}
	return (0);
}

int			ft_launch_test(char *piece)
{
	int		(*find_form[1])(char *, int);

	find_form[0] = ft_check_square;
	launch_test(piece, find_form);
	return (0);
}
