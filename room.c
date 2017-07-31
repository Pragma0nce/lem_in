/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:29:19 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 14:14:33 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"


t_room	*room_create(char *id, int x, int y)
{
	t_room *room;
	
	room = (t_room*)malloc(sizeof(t_room));
	room->position.x = x;
	room->position.y = y;
	room->id = (char*)malloc(sizeof(char) * (ft_strlen(id) + 1));
	room->id = ft_strcpy(room->id, id);
	room->n_links = 0;
	room->links = NULL;
	return (room);
}

void	room_add_link(t_room *room, t_room *link)
{
	t_room **temp;
	int i;

	i = 0;
	if (room->n_links == 0)
	{
		room->links = (t_room**)malloc(sizeof(t_room*));
		room->links[0] = link;
		room->n_links++;
	}
	else
	{
		temp = (t_room**)malloc(sizeof(t_room*) * (room->n_links + 1));
		while (i < room->n_links)
		{
			temp[i] = room->links[i];
			i++;
		}
		temp[i] = link;
		room->links = temp;
		room->n_links++;
	}
}
