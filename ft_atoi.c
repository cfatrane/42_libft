/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:33:14 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/06 12:04:35 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_atoi(const char *str)
{
	long int nb;
	long int sign;

	nb = 0;
	sign = 1;
	while (*str >= 126 || *str <= 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = (-1);
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (sign * nb);
}

*/
int	ft_atoi(const char *str)
{
	long int nb;
	long int sign;

	nb = 0;
	sign = 1;
	while (ft_isprint((int)*str) == 0)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = (-1);
		str++;
	}
	while (ft_isdigit((int)*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (sign * nb);
}