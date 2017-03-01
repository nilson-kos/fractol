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

int		ft_shake_color(t_fr *fr)
{
	fr->cl.g = ((fr->color >> 8) & 0xFF);
	fr->cl.b = (fr->color & 0xFF);
	fr->cl.r = fr->i * 20;
	return ((fr->cl.r << 16) + (fr->cl.g << 8) + fr->cl.b);
}
