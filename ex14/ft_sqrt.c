/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 21:52:45 by mangle            #+#    #+#             */
/*   Updated: 2019/09/08 19:50:43 by mangle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		x;

	x = 0;
	while (x < nb)
	{
		if (nb == x * x)
			return (x);
		x++;
	}
	return (0);
}