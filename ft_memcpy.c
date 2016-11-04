/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:23:38 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:23:45 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*oct1;
	unsigned char	*oct2;

	if (dest == src || n == 0)
		return (dest);
	oct1 = (unsigned char *)dest;
	oct2 = (unsigned char *)src;
	while (n--)
		*oct1++ = *oct2++;
	return (dest);
}