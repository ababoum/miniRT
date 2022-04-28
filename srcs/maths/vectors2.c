/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectors2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:15:44 by mababou           #+#    #+#             */
/*   Updated: 2022/04/28 15:14:35 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/miniRT.h"

float	norm(t_3D_point *pt)
{
	float	n;

	n = 0;
	n += pt->x * pt->x;
	n += pt->y * pt->y;
	n += pt->z * pt->z;

	return (powf(n, 0.5f));
}

float	norm_v(t_vec *v)
{
	float	n;

	n = 0;
	n += v->x * v->x;
	n += v->y * v->y;
	n += v->z * v->z;

	return (powf(n, 0.5f));
}

void	normalize(t_3D_point *pt)
{
	float	n;

	n = norm(pt);
	pt->x /= n;
	pt->y /= n;
	pt->z /= n;
}

void	normalize_v(t_vec *v)
{
	float	n;

	n = norm_v(v);
	v->x /= n;
	v->y /= n;
	v->z /= n;
}
