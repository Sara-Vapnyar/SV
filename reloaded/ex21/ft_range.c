/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 20:22:52 by mangle            #+#    #+#             */
/*   Updated: 2019/09/07 16:41:28 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		len;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	arr = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		arr[i++] = min++;
	}
	return (arr);
}
