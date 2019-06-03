/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 21:43:22 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/02 23:06:15 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	while (++i < nb)
	{
		if ((6 * i) + 1 == nb || (6 * i) - 1 == nb || nb == 2)
		{
			return (1);
		}
	}
	return (0);
}
