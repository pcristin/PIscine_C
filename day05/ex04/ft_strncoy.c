/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncoy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:55:24 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/05 14:24:05 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	char	*dest_tmp;

	i = 0;
	dest_tmp = dest;
	while (++i <= n)
	{
		if (*src != '\0')
			*dest = *src;
		else
			*dest = '\0';
		dest++;
		src++;
	}
	return (dest_tmp);
}
