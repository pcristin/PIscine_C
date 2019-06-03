/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 17:33:12 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/13 22:16:16 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *del;
	t_list *cur;

	if (begin_list)
	{
		if (*begin_list)
		{
			cur = *begin_list;
			while (cur->next != NULL)
			{
				del = cur;
				cur = cur->next;
				free(del);
			}
		}
		else
			return (0);
	}
	else
		return (0);
}
