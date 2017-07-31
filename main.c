/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 08:08:11 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	read_data()
{

}

int		main(int argc, char **argv)
{
	// Create the rooms
	char id[] = "2";
	t_room	*room_0		= room_create("1", 2, 2);
	t_room	*room_1 	= room_create("2", 3, 1);

	// Link the rooms
	room_add_link(room_0, room_1);
	room_add_link(room_1, room_0);

	printf("room_0 has %d links: %s\n", room_0->n_links, room_0->links[0]->id);



	return (0);
}
