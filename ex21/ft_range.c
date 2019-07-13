/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 16:02:03 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/29 14:11:51 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*buffer;
	int i;

	if (min >= max)
		return (0);
	buffer = (int *)malloc((sizeof(int) * (max - min)));
	if (!buffer)
		return (0);
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	return (buffer);
}
