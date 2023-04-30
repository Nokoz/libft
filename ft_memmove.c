/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <gvardaki@student.42.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:22:39 by gvardaki          #+#    #+#             */
/*   Updated: 2023/04/25 10:14:53 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p_dst;
	unsigned char		*p_src;
	size_t				i;
	char				j;

	if (!dst && !src)
		return (NULL);
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	j = 1;
	if (dst > src)
	{
		j = -1;
		p_dst += len - 1;
		p_src += len - 1;
	}
	while (i < len)
	{
		*p_dst = *p_src;
		p_dst += j;
		p_src += j;
		i++;
	}
	return (dst);
}
