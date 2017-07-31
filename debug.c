/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 08:10:07 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 09:18:38 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	print_room(t_room *room)
{
	int i = 0;

	printf("|---------- ROOM (%s) ----------|\n", room->id);
	printf("x:		%d\n", room->position.x);
	printf("y: 		%d\n", room->position.y);
	printf("num_links:	%d\n", room->n_links);
	printf("links: ");
	while (i < room->n_links)
	{
		printf("[%s] ", room->links[i]->id);
		i++;
	}
	printf("\n");
}
