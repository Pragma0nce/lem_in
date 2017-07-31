/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 09:23:08 by kcoetzee         ###   ########.fr       */
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
	t_room	*room_0		= room_create("r0", 2, 2);
	t_room	*room_1 	= room_create("r1", 3, 1);
	t_room	*room_2		= room_create("r2", 1, 2);
	t_room	*room_3		= room_create("r3", 1, 1);

	// Link the rooms
	room_add_link(room_0, room_1);
	room_add_link(room_0, room_2);
	room_add_link(room_0, room_3);
	
	room_add_link(room_1, room_0);
	room_add_link(room_1, room_3);
	
	room_add_link(room_2, room_0);

	room_add_link(room_3, room_0);
	room_add_link(room_3, room_1);

	print_room(room_0);
	print_room(room_1);
	print_room(room_2);
	print_room(room_3);
	return (0);
}
