/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 19:55:09 by kshcherb          #+#    #+#             */
/*   Updated: 2017/03/01 20:07:21 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_put_info(void)
{
	ft_putstr("usage: ./fractol <char>\n");
	ft_putstr("for double usage: ./fractol <char> <char>\n");
	ft_putstr("M for mandelbrot\n");
	ft_putstr("J for julia\n");
	ft_putstr("S for burning ship\n");
	ft_putstr("B for bio\n");
	ft_putstr("F for fabs julia\n");
	exit(0);
}

int		ft_check_flag(char *str)
{
	int	res;
	int	flag;

	flag = 0;
	((res = ft_strcmp(str, "--help")) == 0) ? ft_put_info() : 23;
	(ft_strcmp(str, "M") == 0) ? flag = 1 : 23;
	(ft_strcmp(str, "J") == 0) ? flag = 2 : 23;
	(ft_strcmp(str, "S") == 0) ? flag = 3 : 23;
	(ft_strcmp(str, "B") == 0) ? flag = 4 : 23;
	(ft_strcmp(str, "F") == 0) ? flag = 5 : 23;
	return (flag);
}
