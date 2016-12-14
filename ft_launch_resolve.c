/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_resolve.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 11:45:34 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/14 12:14:16 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char		**ft_set_map(int size)
{
	char 	**map;
	int		i;

	i = -1;
	if ((map = (char **)malloc(sizeof(char *) * size)) == 0)
		return (0);
	while (map[++i])
		ft_bzero((void *)map[i], size);
	return (map);
}

int				ft_launch_resolve(char *content)
{
	int		count;
	char	**map;
	int		i;

	i = -1;
	count = ((ft_strlen(content) / 21) + 1);
	map = ft_set_map(count);
	while (map[++i])
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
	}
	return (0);
}
