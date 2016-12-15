/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_resolve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:45:34 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/14 12:50:16 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		**cut_the_piece(char *str, int max)
{
	int		i;
	char	**ret;

	if (!(ret = (char **)malloc(sizeof(char *) * max)))
		return (0);
	i = -1;
	while (str[++i])
	{
		if (i % 21 == 0)
		{
			if (!(*ret = (char *)malloc(sizeof(char) * 21)))
				return (0);
			ft_memcpy(*ret, (str + i), 20);
			ret++;
		}
	}
	return (ret);
}

int				ft_launch_resolve(char *content)
{
	int		count;
	int		i;
	char	**pieces;

	count = ((ft_strlen(content) / 21) + 1);
	pieces = cut_the_piece(content, count);
	i = -1;
	while (pieces[++i])
	{
		ft_putstr(pieces[i]);
		ft_putchar('\n');
	}
	return (1);
}
