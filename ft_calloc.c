/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvardaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:20:06 by gvardaki          #+#    #+#             */
/*   Updated: 2023/04/18 13:15:04 by gvardaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size != 0)
		if (count != (count * size) / size)
			return (NULL);
	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, (size * count));
	return (p);
}
