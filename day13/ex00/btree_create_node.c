/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 19:26:17 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/15 19:36:56 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = (t_btree *)malloc(sizeof(t_btree));
	temp->item = item;
	temp->right = NULL;
	temp->left = NULL;
	return (temp);
}
