/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_form.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:50:08 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/13 16:00:58 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_check_square(char *str, int points)
{
	int		i;

	i = -1;
	if (str[1] != '#')
		return (0);
	while (str[++i] != '\n');
	if (str[i + points + 1] == '#' && str[i + points + 2] == '#')
		return (1);
	return (0);
}
