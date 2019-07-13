/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:05:58 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/11 15:22:38 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
