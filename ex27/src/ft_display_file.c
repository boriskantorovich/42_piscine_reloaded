/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 16:31:22 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/25 08:59:36 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFSIZE 65536
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display_file(char *fname)
{
	int		fd;
	char	buffer[BUFSIZE];

	if ((fd = open(fname, O_RDONLY)) == -1)
	{
		ft_putstr("Cannot open file.\n");
		return ;
	}
	while (read(fd, buffer, BUFSIZE))
	{
		ft_putstr(buffer);
	}
	if (close(fd) < 0)
	{
		ft_putstr("Cannot close file.\n");
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
		ft_display_file(argv[1]);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
