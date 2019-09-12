/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:58:58 by mangle            #+#    #+#             */
/*   Updated: 2019/09/11 20:52:40 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c);
void	ft_puttstr(char const *s);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
