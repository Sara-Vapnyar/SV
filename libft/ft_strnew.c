/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:40:08 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 14:40:13 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnew(size_t size)
{
    char    *s;
    int     i;

    i = 0;
    if ((s = (char*)malloc(sizeof(char) * size +1)))
    {
        while ((size+1) > 0)
        {
            s[i] = '\0';
            i++;
        }
        return (s);
    }
    else
    {
        return (NULL);
    }  
}