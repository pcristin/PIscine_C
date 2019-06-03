/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:29:10 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/13 21:32:21 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*temp;

	i = 1;
	while (i < ac)
	{
		temp = ft_create_elem(av[ac - i]);
		i++;
		temp = temp->next;
	}
	return (temp);
}
