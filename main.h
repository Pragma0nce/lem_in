/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:57 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/08/02 13:58:30 by kcoetzee         ###   ########.fr       */
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

#define	BOOL	int
#define	TRUE	1
#define FALSE	0

enum E_COLOR
{
	WHITE,
	GRAY,
	BLACK
};

typedef	struct	s_vertex		t_vertex;
typedef	struct	s_vector		t_vector;
typedef	struct	s_queue			t_queue;

struct	s_queue
{
	int				front;
	int				rear;
	int				size;
	unsigned int	capacity;
	t_vertex		*array;
};

struct	s_vector
{
	int	x;
	int y;
};

struct	s_vertex
{
	char			*id;
	enum E_COLOR	color;
	int				distance;
	t_vertex		*pre;
};

t_vertex	*vertex_create(char *id, int x, int y);
void	vertex_add_link(t_vertex *vertex, t_vertex *link);
void	print_vertex(t_vertex *vertex);

t_queue	*create_queue(unsigned int capacity);
void	enqueue(t_queue *queue, t_vertex vertex);
t_vertex	front(t_queue *queue);



#endif
