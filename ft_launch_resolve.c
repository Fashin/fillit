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

static int		ft_test_the_map(char **pieces, char **map)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = -1;
	k = 0;
	while (pieces[++i])
	{
		j = -1;
		l = -1;
		while (pieces[i][++j])
		{
			printf("i = %d ; j = %d ; k = %d ; l = %d\n", i, j, k, l);
			if (pieces[i][j] == '#')
			{
				map[k][++l] = '#';
				printf("insert on map (#) : %d ; %d\n", k, l);
			}
			if (pieces[i][j] == '\n' && l != -1)
			{
				k++;
				l = -1;
			}
		}
	}
	i = 0;
	printf("=================\n");
	printf("Now I display : \n");
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			//printf("i = %d ; j = %d\n", i, j);
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
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
	ft_test_the_map(pieces, map);
	return (1);
}
