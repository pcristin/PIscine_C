/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:25:55 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/13 21:12:03 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_List **begin_list, void *data)
{
	t_list *temp;

	if (begin_list)
	{
		if (*begin_list)
		{
			temp = *begin_list;
			while (temp->next != NULL)
				temp = temp->next;
			temp = ft_create_elem(data);
		}
		else
			*begin_list = ft_create_elem(data);
	}
	return (0);
}
