/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:44:18 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 12:22:09 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*buf;
	int		len;
	int		j;

	len = 0;
	j = -1;
	if (!src)
		return (NULL);
	while (src[len])
		len++;
	if (!(buf = (char*)malloc(len + 1)))
		return (NULL);
	while (src[++j])
		buf[j] = src[j];
	buf[j] = '\0';
	return (buf);
}
