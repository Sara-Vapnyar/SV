/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:15:42 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 12:23:11 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 256

int	ft_strlen(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_display(char *a)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(a, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ft_strlen(buf));
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (-1);
	}
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
		return (-1);
	}
	else
		ft_display(argv[1]);
	return (0);
}
