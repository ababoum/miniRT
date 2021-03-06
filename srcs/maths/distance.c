/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:52:09 by mababou           #+#    #+#             */
/*   Updated: 2022/05/27 17:02:42 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

float	distance_3d(t_3D_point A, t_3D_point B)
{
	return (sqrtf(\
			powf(A.x - B.x, 2) + \
			powf(A.y - B.y, 2) + \
			powf(A.z - B.z, 2) \
			));
}

float	distance_3d_vec(t_vec A, t_vec B)
{
	return (sqrtf(\
			powf(A.x - B.x, 2) + \
			powf(A.y - B.y, 2) + \
			powf(A.z - B.z, 2) \
			));
}

float	distance_3d_vec_pt(t_vec A, t_3D_point B)
{
	return (sqrtf(\
			powf(A.x - B.x, 2) + \
			powf(A.y - B.y, 2) + \
			powf(A.z - B.z, 2) \
			));
}
