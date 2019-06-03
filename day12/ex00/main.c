/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcristin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:29:42 by pcristin          #+#    #+#             */
/*   Updated: 2019/02/14 16:43:19 by pcristin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	ch;

	proverka(argc);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot open the file!\n", 22);
		return (0);
	}
	while ((ret = read(fd, &ch, 1) > 0))
		ft_putchar(ch);
	if (ret < 0)
	{
		write(2, "Cannot read the file!\n", 22);
		return (0);
	}
	close(fd);
	ft_putchar('\n');
	return (0);
}
