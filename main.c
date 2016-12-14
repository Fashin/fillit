/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:12:18 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/14 11:40:27 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		print_the_usage(int ac)
{
	if (ac < 2)
		ft_putstr("Il faut mettre que un seul fichier en parametre :p\n");
	else
		ft_putstr("Ce program ne prend que 1 fichier en parametre :D\n");
}

static char		*return_file(char *fd)
{
	char	*content;
	char	*back;

	if ((content = (char *)malloc(sizeof(char) * 468)) == 0)
		return (0);
	back = ft_read_file(fd);
	if (!back)
		return (0);
	ft_memcpy(content, back, 468);
	return (content);
}

int				main(int ac, char **av)
{
	char	*content;

	if (ac != 2)
	{
		print_the_usage(ac);
		return (0);
	}
	if (!(content = return_file(av[1])))
		return (0);
	if (!(ft_check_pieces(content)))
		return (0);
	if (!(ft_launch_resolve(content)))
		return (0);
	return (0);
}
