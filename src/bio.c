/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bio.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:21:28 by kshcherb          #+#    #+#             */
/*   Updated: 2017/03/01 20:15:07 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_print_pix(int x, int y, t_fr *fr)
{
	float	xtemp;

	fr->x0 = ((x - 800. / 2) * fr->zoom) / 800. + fr->shiftx;
	fr->y0 = ((y - 800. / 2) * fr->zoom) / 800. + fr->shifty;
	fr->x = fr->x0;
	fr->y = fr->y0;
	fr->i = 0;
	fr->max_i = 50;
	while (fr->x * fr->x < 70 && fr->y * fr->y < 70 && fr->i < fr->max_i)
	{
		xtemp = fr->x * fr->x * fr->x * fr->x - fr->y * fr->y *
			fr->y * fr->y - 6 * fr->x * fr->x * fr->y * fr->y + 1;
		fr->y = 4 * fr->x * fr->x * fr->x * fr->y -
			4 * fr->x * fr->y * fr->y * fr->y + 1;
		fr->x = xtemp;
		fr->i++;
	}
	fr->color = 27200;
	if (fabs(fr->x) > 10 * fr->max_i / 50 || fabs(fr->y) > 800 * fr->max_i / 50)
		ft_pix_put(fr, x, y, fr->color * fr->i);
	else
		ft_pix_put(fr, x, y, 0);
}

void		ft_bio(t_fr *fr)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (x <= 800)
	{
		while (y <= 800)
		{
			ft_print_pix(x, y, fr);
			y++;
		}
		x++;
		y = 0;
	}
	ft_pix_put(fr, 400, 400, 0xFFFFFF);
}
