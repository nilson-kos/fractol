/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 13:27:25 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/23 21:20:30 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_fr		*ft_init_fr_key(t_fr *fr)
{
	fr->key.l = 0;
	fr->key.r = 0;
	fr->key.t = 0;
	fr->key.b = 0;
	fr->key.pzoom = 0;
	fr->key.mzoom = 0;
	fr->key.piter = 0;
	fr->key.miter = 0;
	fr->key.move = 1;
	fr->key.clr = 0;
	fr->key.info = 1;
	return (fr);
}

t_fr		*ft_init_fr(int flag, void *mlx)
{
	t_fr	*fr;

	fr = (t_fr *)malloc(sizeof(t_fr));
	fr->trash = 0;
	fr->i = 0;
	fr->flag = flag;
	fr->color = 0x111111;
	fr->w_size_x = 800;
	fr->w_size_y = 800;
	if (mlx == NULL)
		fr->mlx = mlx_init();
	else
		fr->mlx = mlx;
	fr->shiftx = 0.0;
	fr->shifty = 0.0;
	fr->zoom = 4.0;
	fr->iter = 20;
	fr->mouseshifty = 0.0;
	fr->mouseshiftx = 0.0;
	fr->movex = 0.365;
	fr->movey = 0.01;
	fr->win = mlx_new_window(fr->mlx, fr->w_size_x, fr->w_size_y, "LC");
	fr->img = mlx_new_image(fr->mlx, fr->w_size_x, fr->w_size_y);
	fr = ft_init_fr_key(fr);
	return (fr);
}
