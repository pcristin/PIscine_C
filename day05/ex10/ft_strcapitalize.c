/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 19:10:01 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/05 21:35:45 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		proverka(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c < 47 && c > 58))
		return (10);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*str_temp;
	int		i;

	str_temp = str;
	i = 0;
	while (*str_temp != '\0')
	{
		while (proverka(*str_temp))
		{
			if (*str_temp > 64 && *str_temp < 91)
				*str_temp += 32;
			if (*str_temp > 47 && *str_temp < 58)
				i = 1;
			if (*str_temp > 96 && *str_temp < 123 && i == 0)
			{
				*str_temp -= 32;
				i = 1;
			}
			str_temp++;
		}
		i = 0;
		str_temp++;
	}
	return (str);
}
