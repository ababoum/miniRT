/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2D_geo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:57:55 by mababou           #+#    #+#             */
/*   Updated: 2022/03/11 11:47:28 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

t_2D_point	point_2D(float x, float y)
{
	t_2D_point	point = {x, y};

	return (point);
}

t_3D_point	point_3D(float x, float y, float z)
{
	t_3D_point	point = {x, y, z};

	return (point);
}
