/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_resolve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:45:34 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/15 18:11:25 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static char		**cut_the_piece(char *str, int max)
{
	int		i;
	int		count;
	char	**ret;

	if (!(ret = (char **)malloc(sizeof(char *) * max)))
		return (0);
	i = -1;
	count = -1;
	while (str[++i])
	{
		if (i % 21 == 0)
		{
			if (!(ret[++count] = (char *)malloc(sizeof(char) * 21)))
				return (0);
			ft_memcpy(ret[count], (str + i), 20);
			ret[count][21] = '\0';
		}
	}
	return (ret);
}

static char		*resize_the_piece(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == '#')
			return (str + i);
	return (0);
}

static void		set_tetriminos(char **map, char *tetri)
{
	int	a;
	int	b;
	int	i;

	i = -1;
	a = 0;
	while (map[a])
	{
		while (map[a][b])
		{
			
		}
	}
}

static int		ft_test_the_map(char **pieces, char **map, int max)
{
	int	i;
	char	*tmp;

	i = -1;
	while (++i < max)
	{
		tmp = resize_the_piece(pieces[i]);	
		set_tetriminos(map, tmp);
	}
	return (1);
}

static char		**ft_get_the_map(int size)
{
	char	**map;
	int		i;

	if (!(map = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	i = -1;
	while (++i < size)
	{
		if (!(map[i] = (char *)malloc(sizeof(char) * size)))
			return (0);
		ft_memset((void *)map[i], '*',size);
		map[i][size] = '\0';
	}
	map[i + 1] = "\0";
	return (map);
}

int				ft_launch_resolve(char *content)
{
	int		count;
	char	**pieces;
	char	**map;

	count = ((ft_strlen(content) / 21) + 1);
	pieces = cut_the_piece(content, count);
	map = ft_get_the_map(4);
	ft_test_the_map(pieces, map, count);
	return (1);
}
