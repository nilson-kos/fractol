/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zaloop_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 18:15:22 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/23 18:49:38 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		button_press(int kcode, t_fr *fr)
{
	(kcode == 53) ? exit(0) : 1;
	(kcode == 49) ? fr->key.move += 1 : 1;
	(kcode == 29) ? fr->shiftx = 0 : 1;
	(kcode == 29) ? fr->shifty = 0 : 1;
	(kcode == 123) ? fr->key.l = 1 : 23;
	(kcode == 124) ? fr->key.r = 1 : 23;
	(kcode == 126) ? fr->key.t = 1 : 23;
	(kcode == 125) ? fr->key.b = 1 : 23;
	(kcode == 24) ? fr->key.pzoom = 1 : 22;
	(kcode == 27) ? fr->key.mzoom = 1 : 22;
	(kcode == 116) ? fr->key.piter = 1 : 21;
	(kcode == 121) ? fr->key.miter = 1 : 21;
	return (0);
}

int		button_release(int kcode, t_fr *fr)
{
	(kcode == 123) ? fr->key.l = 0 : 23;
	(kcode == 124) ? fr->key.r = 0 : 23;
	(kcode == 126) ? fr->key.t = 0 : 23;
	(kcode == 125) ? fr->key.b = 0 : 23;
	(kcode == 24) ? fr->key.pzoom = 0 : 22;
	(kcode == 27) ? fr->key.mzoom = 0 : 22;
	(kcode == 116) ? fr->key.piter = 0 : 21;
	(kcode == 121) ? fr->key.miter = 0 : 21;
	return (0);
}

int		mouse_release(int kcode, int x, int y, t_fr *fr)
{
	if (kcode == 4)
 	{
			fr->mouseshifty = ((y - 400.) / 800.) * fr->zoom;
			fr->shifty += fr->mouseshifty;
			fr->mouseshiftx = ((x - 400.) / 800.) * fr->zoom;
			fr->shiftx += fr->mouseshiftx;
			fr->zoom /= 1.05;
			fr->shiftx -= ((x - 400.) / 800.) * fr->zoom;
			fr->shifty -= ((y - 400.) / 800.) * fr->zoom;
	}
	if (kcode == 5)
	{
			fr->mouseshifty = ((y - 400.) / 800.) * fr->zoom;
			fr->shifty += fr->mouseshifty;
			fr->mouseshiftx = ((x - 400.) / 800.) * fr->zoom;
			fr->shiftx += fr->mouseshiftx;
			fr->zoom *= 1.05;
			fr->shiftx -= ((x - 400.) / 800.) * fr->zoom;
			fr->shifty -= ((y - 400.) / 800.) * fr->zoom;
	}
	return (0);
}

int		mouse_move(int x, int y, t_fr *fr)
{
			if (fr->key.move % 2 == 0)
			{
				fr->movex = (x * 1. - 800 / 2) / 800 + 0.9337;
				fr->movey = (y * 1. - 800 / 2) / 800 + 0.228;
			}
			return (0);
}
/*
**	93 - arrows
**	92 - zoom(dont work)
**  91 - amount of iterations
**	90 - mouse zoom
*/

int		ft_zaloop_hook(t_fr *fr)
{
	(fr->key.l != 0) ? fr->shiftx += 0.05 * fr->zoom : 93;
	(fr->key.r != 0) ? fr->shiftx -= 0.05 * fr->zoom : 93;
	(fr->key.t != 0) ? fr->shifty += 0.05 * fr->zoom : 93;
	(fr->key.b != 0) ? fr->shifty -= 0.05 * fr->zoom : 93;
	(fr->key.pzoom != 0) ? fr->zoom /= 1.05 : 92;
	(fr->key.mzoom != 0) ? fr->zoom *= 1.05 : 92;
	(fr->key.miter != 0) ? fr->iter -= 1 : 91;
	(fr->key.piter != 0) ? fr->iter += 1 : 91;
 	mlx_hook(fr->win, 2, 1, button_press, fr);
	mlx_hook(fr->win, 3, 2, button_release, fr);
	(fr->flag == 2 )? mlx_hook(fr->win, 6, 65, mouse_move, fr) : 90;
	mlx_mouse_hook(fr->win, mouse_release, fr);
	ft_fractol(fr);
	mlx_put_image_to_window(fr->mlx, fr->win, fr->img, 0, 0);
	return (0);
}
