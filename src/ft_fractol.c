/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fractol.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 16:45:13 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/22 16:54:47 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_fractol(t_fr *fr)
{
	(fr->flag == 1) ? ft_mandel(fr) : 23;
	(fr->flag == 2) ? ft_julia(fr) : 23;
	(fr->flag == 3) ? ft_burning_ship(fr) : 23;
	(fr->flag == 4) ? ft_bio(fr) : 23;
	(fr->flag == 5) ? ft_fabsj(fr) : 23;
}
