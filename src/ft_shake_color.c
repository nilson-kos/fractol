/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shake_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 17:24:18 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/22 20:08:17 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		ft_change_color(t_fr *fr)
{
	fr->key.clr += 1;
	(fr->key.clr == 3) ? fr->key.clr = 0 : 666;
	(fr->key.clr == 0) ? fr->color = 0x111111 : 666;
	(fr->key.clr == 1) ? fr->color = 0x1111FF : 666;
	(fr->key.clr == 2) ? fr->color = 0x11FF11 : 666;
	return (0);
}

int		ft_return_norm(t_fr *fr)
{
	fr->shiftx = 0.0;
	fr->shifty = 0.0;
	fr->zoom = 4.0;
	fr->iter = 20;
	fr->mouseshifty = 0.0;
	fr->mouseshiftx = 0.0;
	fr->movex = 0.365;
	fr->movey = 0.01;
	return (0);
}

int		lsd_color(t_fr *fr)
{
	int r;

	srand(time(NULL));
	r = rand();
	fr->color = r;
	return (0);
}

int		exit_x(void *par)
{
	par = NULL;
	exit(1);
	return (0);
}

int		ft_shake_color(t_fr *fr)
{
	fr->cl.g = ((fr->color >> 8) & 0xFF);
	fr->cl.b = (fr->color & 0xFF);
	fr->cl.r = fr->i * 20;
	return ((fr->cl.r << 16) + (fr->cl.g << 8) + fr->cl.b);
}
