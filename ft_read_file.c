/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 13:58:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2016/12/10 15:46:37 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fillit.h"

char	*ft_read_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[468];
	char	*back;

	if ((fd = open(file_name, O_RDONLY)) < 0)
	{
		ft_putstr_fd("error : file doesn't exist\n", 0);
		return (0);
	}
	ret = read(fd, buf, 446);
	if ((back = (char *)malloc(sizeof(char) * ret)) == 0)
		return (0);
	buf[ret] = '\0';
	back = buf;
	return (back);
}
