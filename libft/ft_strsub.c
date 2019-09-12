/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:41:52 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 20:56:55 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if ((sub = (char*)malloc(sizeof(char) * len)))
	{
		while (len > 0)
		{
			sub[i] = s[start];
			i++;
			start++;
			len--;
		}
		return (sub);
	}
	else
	{
		return (NULL);
	}
}
