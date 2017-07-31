/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:29:19 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 08:03:31 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

#define	BLOCK_SIZE 4

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
	if (room->n_links == 0)
	{
		room->links = (t_room**)malloc(sizeof(t_room*) * BLOCK_SIZE);
		room->links[0] = link;
		room->n_links++;
	}
}
