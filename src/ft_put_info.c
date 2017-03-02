/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_info.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:50:39 by kshcherb          #+#    #+#             */
/*   Updated: 2017/03/02 14:50:40 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_for_i(t_fr *fr)
{
	mlx_string_put(fr->mlx, fr->win, 5, 10, 0xFFFFFF, "press i for info");
}

void	ft_info(t_fr *fr)
{
	mlx_string_put(fr->mlx, fr->win, 5, 10, 0xFFFFFF, "use arrows from move");
	mlx_string_put(fr->mlx, fr->win, 5, 30, 0xFFFFFF, "+ / - for zoom");
	mlx_string_put(fr->mlx, fr->win, 5, 50, 0xFFFFFF,
		"page up / page down for iterations");
	mlx_string_put(fr->mlx, fr->win, 5, 70, 0xFFFFFF, "c for change color");
	mlx_string_put(fr->mlx, fr->win, 5, 90, 0xFFFFFF, "d for random color");
	mlx_string_put(fr->mlx, fr->win, 5, 110, 0xFFFFFF, "space for normal");
	mlx_string_put(fr->mlx, fr->win, 5, 130, 0xFFFFFF,
		"mouse 1 for julia and fabs");
}
