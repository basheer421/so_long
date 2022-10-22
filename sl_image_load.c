/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sl_image_load.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bammar <bammar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:16:40 by bammar            #+#    #+#             */
/*   Updated: 2022/10/22 15:30:41 by bammar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_image_vars	*image_load(t_mlx_vars *mlx_vars)
{
	t_image_vars	*image_vars;
	int				length;

	length = 64;
	image_vars = malloc(sizeof(t_image_vars));
	if (!image_vars)
		return (perror("Error\nNo mem"), NULL);
	image_vars->block[0] = mlx_xpm_file_to_image(mlx_vars->mlx_ptr,
			"assets/block3_64x64.xpm", &length, &length);
	image_vars->block[1] = mlx_xpm_file_to_image(mlx_vars->mlx_ptr,
			"assets/block4_64x64.xpm", &length, &length);
	image_vars->rat = mlx_xpm_file_to_image(mlx_vars->mlx_ptr,
			"assets/rat/tile001.xpm", &length, &length);
	image_vars->cheese = mlx_xpm_file_to_image(mlx_vars->mlx_ptr,
			"assets/cheese.xpm", &length, &length);
	image_vars->exit = mlx_xpm_file_to_image(mlx_vars->mlx_ptr,
			"assets/exit.xpm", &length, &length);
	return (image_vars);
}
