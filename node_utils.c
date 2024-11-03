/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:43:31 by ktiyari           #+#    #+#             */
/*   Updated: 2024/06/13 11:43:33 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

node_t *create_node(int value)
{
    node_t *new_node;

    new_node = (node_t *)malloc(sizeof(node_t));
    if (!new_node)
        return (NULL);
    new_node->value = value;
    new_node->next = NULL;
    return (new_node);
}

void add_node_tostack(node_t **head, node_t *new)
{
    node_t *node;

    node = *head;
    if (*head)
    {
        while (node->next != NULL)
            node = node->next;
        node->next = new;
    }
    else
        *head = new;
}

void print_stack(node_t *stack)
{
    node_t *current = stack;
    while (current)
    {
        printf("%d ", current->value);
        current = current->next;
    }
}
