/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 18:52:23 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/04 22:47:09 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dec_count(int k, char *str);

int	ft_atoi(char *str)
{
	int k;

	k = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		k = -1;
		return (dec_count(k, ++str));
	}
	else if (*str == '+')
	{
		return (dec_count(k, ++str));
	}
	else if (*str >= 48 && *str <= 57)
		return (dec_count(k, str));
	else
	{
		return (0);
	}
}

int	dec_count(int k, char *str)
{
	int		summ;
	char	*i;
	int		dec;

	i = str;
	dec = 1;
	summ = 0;
	if (*i > 57 || *i < 48)
	{
		return (0);
	}
	while (*i >= 48 && *i <= 57)
	{
		i++;
	}
	i--;
	while (i >= str)
	{
		summ = summ + (*i - 48) * dec;
		dec = dec * 10;
		i--;
	}
	return (summ * k);
}
