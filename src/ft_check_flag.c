/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:55:09 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/22 16:49:23 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_info(void)
{
	ft_putstr("usage: ./fractol <char>\n");
	ft_putstr("M for mandelbrot\n");
	ft_putstr("J for julia\n");
	ft_putstr("P for petuch\n");
	exit (0);
}

int		ft_check_flag(char *str)
{
	int	res;
	int	flag;

	flag = 0;
	((res = ft_strcmp(str, "--help")) == 0) ? ft_put_info() : 23;
	((res = ft_strcmp(str, "M")) == 0) ? flag = 1 : 23;
	((res = ft_strcmp(str, "J")) == 0) ? flag = 2 : 23;
	((res = ft_strcmp(str, "P")) == 0) ? flag = 3 : 23;
	return (flag);
}
