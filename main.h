/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:57 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/07/31 08:21:17 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MAIN_H
#define	MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// TODO: Remove these before submission
#define	ft_strlen	strlen
#define	ft_strcpy	strcpy

typedef	struct	s_room		t_room;
typedef	struct	s_vector	t_vector;

struct	s_vector
{
	int	x;
	int y;
};


struct	s_room
{
	char		*id;
	t_vector	position;
	t_room		**links;
	int			n_links;
};

t_room	*room_create(char *id, int x, int y);
void	room_add_link(t_room *room, t_room *link);
void	print_room(t_room *room);




#endif
