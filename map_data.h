/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_data.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpark-ki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 20:11:54 by mpark-ki          #+#    #+#             */
/*   Updated: 2020/07/29 20:44:22 by mpark-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_map_data
{
	int		x_res;
	int		y_res;
	char	*no;
	char	*so;
	char	*we;
	char	*ea;
	char	*sprite;
	int		*floor_r;
	int		*floor_g;
	int		*floor_b;
}				t_map_data;
	
