/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:32:54 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 12:47:16 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dest;
	size_t	total;

	if (nmemb == 0 || size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (NULL);
		*(dest) = 0;
		return (dest);
	}
	total = nmemb * size;
	if (nmemb != total / size)
		return (NULL);
	dest = malloc(total);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, total);
	return ((void *)dest);
}
