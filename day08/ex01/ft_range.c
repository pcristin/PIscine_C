/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 17:06:36 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/07 18:44:22 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int len;
	int i;
	int *temp;

	i = 0;
	len = max - min;
	if ( len <= 0)
		return (0);
	temp = (int *)malloc(len + 1);
	while (min < max)
	{
		temp[i] = min;
		min += 1;
		i++;
	}
	return (temp);
}
