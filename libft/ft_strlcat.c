/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:04:07 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 11:55:15 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && len + 1 < size)
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
