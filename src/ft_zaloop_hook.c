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

/*
**	93 - arrows
**	92 - zoom(dont work)
**  91 - amount of iterations
*/

int		ft_zaloop_hook(t_fr *fr)
{
	(fr->key.l != 0) ? fr->shiftx += 0.01 : 93;
	(fr->key.r != 0) ? fr->shiftx -= 0.01 : 93;
	(fr->key.t != 0) ? fr->shifty += 0.01 : 93;
	(fr->key.b != 0) ? fr->shifty -= 0.01 : 93;
	(fr->key.pzoom != 0) ? fr->zoom /= 1.01 : 92;
	(fr->key.mzoom != 0) ? fr->zoom *= 1.01 : 92;
	(fr->key.miter != 0) ? fr->iter -= 1 : 91;
	(fr->key.piter != 0) ? fr->iter += 1 : 91;
 	mlx_hook(fr->win, 2, 1, button_press, fr);
	mlx_hook(fr->win, 3, 2, button_release, fr);
	ft_mandel(fr);
	mlx_put_image_to_window(fr->mlx, fr->win, fr->img, 0, 0);
	return (0);
}
