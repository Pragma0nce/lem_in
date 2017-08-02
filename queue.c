/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcoetzee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 15:26:18 by kcoetzee          #+#    #+#             */
/*   Updated: 2017/08/02 14:00:35 by kcoetzee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

t_queue	*create_queue(unsigned int capacity)
{
	t_queue *temp;

	temp = (t_queue*)malloc(sizeof(t_queue));
	temp->capacity = capacity;
	temp->front = 0;
	temp->size = 0;
	temp->rear = capacity - 1;
	temp->array = (t_vertex*)malloc(capacity * sizeof(t_vertex));
	return (temp);
}

int		queue_is_full(t_queue *queue)
{
	return (queue->size == queue->capacity);
}

int		queue_is_empty(t_queue *queue)
{
	return (queue->size == 0);
}

void	enqueue(t_queue *queue, t_vertex vertex)
{
	if (queue_is_full(queue))
		return;

	queue->rear = (queue->rear + 1) % queue->capacity;
	queue->array[queue->rear] = vertex;
	queue->size = queue->size + 1;
}

// FRONT AND REAR //
t_vertex	front(t_queue *queue)
{
	return (queue->array[queue->front]);
}

t_vertex	dequeue(t_queue *queue)
{
	t_vertex item;
	if (queue_is_empty(queue))
		return (item);
	item = queue->array[queue->front];
	queue->front = (queue->front + 1) % queue->capacity;
	queue->size = queue->size - 1;
	return (item);
}
