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

t_fr		*ft_init_fr(int flag)
{
	t_fr	*fr;

	fr = (t_fr *)malloc(sizeof(t_fr));
	fr->i = 0;
	fr->flag = flag;
	fr->color = 0x11111111;
	fr->w_size_x = 800;
	fr->w_size_y = 800;
	fr->mlx = mlx_init();
	fr->shiftx = 0.0;
	fr->shifty = 0.0;
	fr->zoom = 4.0;
	fr->iter = 20;
	fr->win = mlx_new_window(fr->mlx, fr->w_size_x, fr->w_size_y, "LC");
	fr->img = mlx_new_image(fr->mlx, fr->w_size_x, fr->w_size_y);
	return (fr);
}
