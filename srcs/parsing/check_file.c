/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:17:06 by mababou           #+#    #+#             */
/*   Updated: 2022/03/11 18:22:52 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

int	verify_file(t_data *data, const char *path)
{
	int fd;

	if (ft_strlen(path) < 3 || ft_strcmp(path + ft_strlen(path) - 3, ".rt"))
	{
		ft_putstr_fd("Incorrect filename (extension should be .rt)\n", 2);
		clear_exit(data, 1);
	}
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		perror(path);
		clear_exit(data, 1);
	}
	return (fd);
}