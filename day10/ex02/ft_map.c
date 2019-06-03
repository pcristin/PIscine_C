/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 20:17:18 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/12 12:36:23 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *temp;

	i = 0;
	temp = (int *)malloc(4 * length);
	while (i < length)
	{
		*temp = f(tab[i]);
		i++;
		temp++;
	}
	return (temp);
}
