/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:24:29 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/26 13:21:49 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*s1_copy;
	int		i;

	i = 0;
	if (!src)
		return (0);
	len = ft_strlen(src) + 1;
	s1_copy = (char *)malloc(len * sizeof(char));
	if (!s1_copy)
		return (0);
	while (src[i] != '\0')
	{
		s1_copy[i] = src[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
