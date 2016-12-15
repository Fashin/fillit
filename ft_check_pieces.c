/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 14:06:39 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/15 12:26:17 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int ft_cut_pieces(char *pieces);
static int ft_check_piece(char *piece);

static int		ft_cut_pieces(char *pieces)
{
	int		i;

	i = -1;
	while (pieces[++i])
		if (i % 21 == 0)
			if (!(ft_check_piece(pieces + i)))
				return (0);
	return (1);
}

static int		ft_check_piece(char *piece)
{
	char	*real_piece;

	if ((real_piece = (char *)malloc(sizeof(char) * 21)) == 0)
		return (0);
	ft_memcpy(real_piece, piece, 20);
	if (!(ft_launch_test(real_piece)))
		return (0);
	free(real_piece);
	return (1);
}

int				ft_check_pieces(char *pieces)
{
	if (!(ft_check_char(pieces)))
	{
		ft_putstr("error file\n");
		return (0);
	}
	if (!(ft_cut_pieces(pieces)))
	{
		ft_putstr("error pieces\n");
		return (0);
	}
	return (1);
}
