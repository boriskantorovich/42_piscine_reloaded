/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:12:41 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/26 14:37:29 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_swapchar(char **str1, char **str2)
{
	char *temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

int		ft_strcmp(char *s1, char *s2)
{
	int size;

	size = ft_strlen(s2) + 1;
	while (size--)
	{
		if ((*s1) == '\0')
			return (0);
		if (*(s1++) != *(s2++))
			return ((*(--s1) > *(--s2)) ? (*s1 - *s2) : \
			((-1) * (*s2 - *s1)));
	}
	return (0);
}

void	ft_sort(char **argv, int argc)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < (argc - 1))
	{
		j = 0;
		while (j < (argc - 1))
		{
			if ((ft_strcmp(argv[j], argv[j + 1])) > 0)
			{
				ft_swapchar(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort(argv, argc);
	while (i < argc)
	{
		while (*argv[i] != '\0')
			ft_putchar(*(argv[i])++);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
