/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:58:12 by dfisher           #+#    #+#             */
/*   Updated: 2019/06/27 12:59:16 by dfisher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int start;
	int end;
	int mid;

	start = 1;
	end = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (nb);
	while (start <= end)
	{
		mid = (start + end) / 2;
		if ((mid > 46340) || ((mid * mid) > nb))
			end = mid - 1;
		else if ((mid * mid) == nb)
			return (mid);
		else
			start = mid + 1;
	}
	return (0);
}
