/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 23:19:03 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/07 23:42:09 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char *)malloc(4 * argc);
	while (*temp < argc)
	{
		if (*temp[i] != ' ')
			i++;
		*temp[i] = '\n';
		temp++;
	}
	return (temp);
}
