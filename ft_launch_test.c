/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:07:11 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/15 12:25:32 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_checkpattern(char *tocheck)
{
	int		i;
	int		countr;
		
	i = -1;
	countr = 0;
	while (++i < 20)
		if (tocheck[i] == '#')
		{
			if (tocheck[i + 1] == '#')
				countr++;
			if (tocheck[i - 1] == '#')
				countr++;
			if (tocheck[i + 5] == '#')
				countr++;
			if (tocheck[i - 5] == '#')
				countr++;
		}
	if (countr >= 6)
		return (1);
	return (0);
}

int			ft_launch_test(char *check_pattern)
{
	if (!ft_checkpattern(check_pattern))
		return (0);
	return (1);
}
