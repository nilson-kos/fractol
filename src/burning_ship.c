/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning_ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:30:59 by kshcherb          #+#    #+#             */
/*   Updated: 2017/03/01 20:09:24 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	ft_print_pix(int x, int y, t_fr *fr)
{
	float	xtemp;

	fr->x0 = ((x - 800. / 2) * fr->zoom) / 800. + fr->shiftx;
	fr->y0 = ((y - 800. / 2) * fr->zoom) / 800. + fr->shifty;
	fr->x = 0.0;
	fr->y = 0.0;
	fr->i = 0;
	fr->max_i = fr->iter;
	while (fr->x * fr->x + fr->y * fr->y < 4 && fr->i < fr->max_i)
	{
		xtemp = fr->x * fr->x - fr->y * fr->y + fr->x0;
		fr->y = fabs(2 * fr->x * fr->y) + fr->y0;
		fr->x = xtemp;
		fr->i += 1;
	}
	fr->color = ft_shake_color(fr);
	if (fr->i < fr->max_i)
		ft_pix_put(fr, x, y, fr->color);
	else
		ft_pix_put(fr, x, y, 0);
}

void		ft_burning_ship(t_fr *fr)
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
