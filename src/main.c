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

int			ft_double_zaloop_hook(t_fr **f)
{
	ft_zaloop_hook(f[0]);
	ft_zaloop_hook(f[1]);
	return (0);
}

void		ft_double(char **argv)
{
	t_fr	**f;
	int		flag;
	int		flag1;

	flag = ft_check_flag(argv[1]);
	flag1 = ft_check_flag(argv[2]);
	if (flag == 0 || flag1 == 0)
	{
		ft_putstr("invalid char\nusage: ./fractol --help\n");
		exit(0);
	}
	f = (t_fr **)malloc(sizeof(t_fr *) * 2);
	f[0] = ft_init_fr(flag, NULL);
	f[1] = ft_init_fr(flag1, f[0]->mlx);
	mlx_loop_hook(f[0]->mlx, ft_double_zaloop_hook, f);
	mlx_loop(f[0]->mlx);
}

int			main(int argc, char **argv)
{
	t_fr	*fr;
	int		flag;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("usage: ./fractol --help\n");
		return (0);
	}
	if (argc == 3)
		ft_double(argv);
	flag = ft_check_flag(argv[1]);
	if (flag == 0)
	{
		ft_putstr("invalid char\nusage: ./fractol --help\n");
		return (0);
	}
	fr = ft_init_fr(flag, NULL);
	mlx_loop_hook(fr->mlx, ft_zaloop_hook, fr);
	mlx_loop(fr->mlx);
	return (0);
}
