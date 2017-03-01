/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshcherb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 18:26:22 by kshcherb          #+#    #+#             */
/*   Updated: 2017/02/23 21:30:34 by kshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <math.h>
# include "mlx.h"

# include <stdio.h>

# include "../libft/libft.h"

typedef struct		s_color
{
	int				r;
	int				g;
	int				b;
}					t_cl;

typedef struct		s_key
{
	int				l;
	int				r;
	int				t;
	int				b;
	int				pzoom;
	int				mzoom;
	int				piter;
	int				miter;
	int				move;
	int				clr;
}					t_key;

typedef struct		s_fr
{
	void			*mlx;
	void			*win;
	void			*img;
	int				w_size_x;
	int				w_size_y;
	int				flag;
	int				color;
	int				i;
	int				max_i;
	float			x0;
	float			y0;
	float			x;
	float			y;
	float			shiftx;
	float			shifty;
	float			zoom;
	int				iter;
	float			mouseshifty;
	float			mouseshiftx;
	float			movex;
	float			movey;
	int				trash;
	struct s_color	cl;
	struct s_key	key;
}					t_fr;

int		ft_check_flag(char *str);
t_fr	*ft_init_fr(int flag);
void	ft_fractol(t_fr *fr);
void	ft_mandel(t_fr *fr);
void	ft_julia(t_fr *fr);
void	ft_fabsj(t_fr *fr);
void	ft_burning_ship(t_fr *fr);
void	ft_bio(t_fr *fr);
int		ft_shake_color(t_fr *fr);
int		ft_zaloop_hook(t_fr *fr);
int		ft_change_color(t_fr *fr);
void	ft_pix_put(t_fr *fr, int x, int y, int rgb);

#endif
