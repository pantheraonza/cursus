/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: criredon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 13:26:48 by criredon          #+#    #+#             */
/*   Updated: 2026/05/31 13:26:49 by criredon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[4096];
	int		bytes;

	if (argc == 1)
		return (write(2, "File name missing.\n", 19), 1);
	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20), 1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
		return (write(2, "Cannot read file.\n", 18), 1);
	bytes = read(fd, buf, 4096);
	while (bytes > 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, 4096);
	}
	close(fd);
	return (0);
}
