/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 11:03:30 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	read_data()
{

}

int		find_shortest_path(t_room *start, t_room *end, int min_count, int count, t_room *caller)
{
	printf("I ran!\n");
	int i = 0;
	int lowest_index = 0;

	t_room *result;
	count++;

	if (start == end)
	{
		return (lowest_index);
	}

	while (i < start->n_links)
	{
		if (start->links[i] != caller)
		{
			count = find_shortest_path(start->links[i], end, min_count, count, start);
			if (count < min_count)
			{
				lowest_index = i;
				min_count = count;
			}
		}
		i++;
	}
	return (count);

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

	int test = find_shortest_path(room_0, room_3, 10, 0, NULL);
	printf("Result: %d\n", test);
	return (0);
}
