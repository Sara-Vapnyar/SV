/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:42:09 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 14:42:11 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char * ft_strjoin(char const *s1, char const *s2)
{
    char    *dst;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if ((dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) +1))))
    {
        while (s1[i])
        {
            dst[i] = s1[i];
            i++;
        }
        while (s2[j])
        {
            dst[i] = s2[j];
            i++;
            j++;
        }
        dst[i] = '\0';
        return (dst);
    }
    else
    {
        return (NULL);
    }
}