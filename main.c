/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 07:23:45 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/08/01 15:21:11 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_vertex	*create_adjacency_list

void	read_data()
{

}

void	find_shortest_path(int **graph, int src, int num_vertices)
{
	int		*dist;
	BOOL	*sptSet;
	int		i;

	dist = (int*)malloc(sizeof(int) * num_vertices);
	sptSet = (BOOL*)malloc(sizeof(int) * num_vertices);

	// Initialize all distances as infinite
	while (i < num_vertices)
	{
		dist[i] = INT_
	}
}

int		main(int argc, char **argv)
{
	// Create the vertexs
	char id[] = "2";
	t_vertex	*vertex_A		= vertex_create("A", 2, 2);	
	t_vertex	*vertex_B		= vertex_create("B", 2, 2);
	t_vertex	*vertex_C		= vertex_create("C", 2, 2);
	t_vertex	*vertex_C		= vertex_create("C", 2, 2);
	t_vertex	*vertex_C		= vertex_create("C", 2, 2);
	
	int test = find_shortest_path(vertex_0, vertex_3, 10, 0, NULL);
	printf("Result: %d\n", test);
	return (0);
}
