/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 18:28:28 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/23 18:45:59 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int			main(int argc, char **argv)
{
	t_fr	*fr;
	int		flag;

	if (argc != 2)
	{
		ft_putstr("usage: ./fractol --help\n");
		return (0);
	}
	flag = ft_check_flag(argv[1]);
	if (flag == 0)
	{
		ft_putstr("invalid char\nusage: ./fractol --help\n");
		return (0);
	}
	fr = ft_init_fr(flag);
	ft_fractol(fr);
	mlx_loop_hook(fr->mlx, ft_zaloop_hook, fr);
	mlx_loop(fr->mlx);
	return (0);
}
