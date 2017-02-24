/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pix_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/23 21:02:32 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/23 21:24:55 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_pix_put(t_fr *fr, int x, int y, int rgb)
{
	int				bpp;
	int				sl;
	int				en;
	char			*imag;
	unsigned int	tmp;

	imag = mlx_get_data_addr(fr->img, &bpp, &sl, &en);
	tmp = (mlx_get_color_value(fr->mlx, rgb));
	if (x > 0 && x < fr->w_size_x && y > 0 && y < fr->w_size_y)
		ft_memcpy((void *)((imag + y * fr->w_size_x *
						(bpp / 8) + x * (bpp / 8))), (void *)&tmp, 4);
}
