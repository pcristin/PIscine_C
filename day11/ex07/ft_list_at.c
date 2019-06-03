/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:15:06 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/13 21:30:37 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_llist, unsigned int nbr)
{
	int		i;
	t_list	*temp;

	i = 0;
	if (begin_list)
	{
		temp = begin_list;
		while (i != nbr && temp->next != NULL)
			temp = temp->next;
		return (temp);
	}
	else
		return (0);
}
