/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 18:46:28 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/07 23:02:09 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int len;
	int *temp;

	i = 0;
	len = max - min;
	if (len <= 0)
		return (0);
	temp = (int *)malloc(4 * len + 1);
	while (min < max)
	{
		temp[i] = min;
		min += 1;
		i++;
	}
	*range = temp;
	return (len);
}
