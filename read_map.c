/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpark-ki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:50:00 by mpark-ki          #+#    #+#             */
/*   Updated: 2020/07/29 20:44:22 by mpark-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static t_map_data *init_map(void)
{
	t_map_data	*tmp;

	if ((tmp = (t_map_data *)malloc(sizeof(t_map_data))))
	{
		tmp->x_res = 0;
		rmp->y_res = 0;
		tmp->no = ft_strdup("");
		tmp->so = ft_strdup("");
		tmp->we = ft_strdup("");
		tmp->ea = ft_strdup("");
		tmp->sprite = ft_strdup("");
		tmp->floor_r = -1;
		tmp->floor_g = -1;
		tmp->floor_b = -1;
}

int		*get_resolution(char *line)
{
	t_map_data	
	char 	*pointer;

	if (pointer = ft_strchr(line, 'R'))
	{
		*pointer++;
		if (*pointer)
			x_res = ft_atoi(pointer);
		pointer = ft_strnstr(line, pointer);
		while (ft_isdigit(*pointer))
			*pointer++;
		if (*pointer)
			y_res = ft_atoi(pointer);
	}
}

int		read_file(void)
{
	int		fd;
	char	*line;
	int		i;

	if (!(fd = open("map", O_RDONLY)))
	{
		ft_printf("Error Opening\n");
		return (0);
	}
	while ((i = get_next_line(fd, &line)) > 0)
	{
		if (ft_strchr(line, 'R'))
		{

		}
	}
	close(fd);
}
