/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 22:23:04 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/12 22:07:54 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (length <= 2)
			return (1);
		if (f(tab[i], tab[i + 1]) < 0 && (f(tab[i + 1], tab[i + 2]) > 0))
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && (f(tab[i + 1], tab[i + 2]) < 0))
			return (0);
		else
			i++;
	}
	return (1);
}
