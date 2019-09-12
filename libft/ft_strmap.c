/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:28:59 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 21:22:23 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;
	char	*b;

	i = 0;
	b = (char*)s;
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (b[i])
	{
		s2[i] = f(b[i]);
		i++;
	}
	return (s2);
}
