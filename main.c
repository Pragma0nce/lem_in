/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 14:14:33 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	read_data()
{

}

int		find_shortest_path(t_room *start, t_room *end, int min_count, int count, t_room *caller)
{

}

int		main(int argc, char **argv)
{
	// Create the rooms
	char id[] = "2";
	t_room	*room_A		= room_create("A", 2, 2);	
	t_room	*room_B		= room_create("B", 2, 2);
	t_room	*room_C		= room_create("C", 2, 2);
	t_room	*room_C		= room_create("C", 2, 2);
	t_room	*room_C		= room_create("C", 2, 2);
	
	int test = find_shortest_path(room_0, room_3, 10, 0, NULL);
	printf("Result: %d\n", test);
	return (0);
}
