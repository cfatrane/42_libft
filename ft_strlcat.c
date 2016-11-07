/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:39:04 by cfatrane          #+#    #+#             */
/*   Updated: 2016/11/04 11:39:10 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, char *src, unsigned int size)
{
	unsigned	int dst_len;
	unsigned	int i;
	unsigned	int j;

	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	while (i < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		j++;
	}
	dst[dst_len + i] = '\0';
	while (src[j] != '\0')
		j++;
	return (j + size);
}
