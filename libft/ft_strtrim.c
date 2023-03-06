/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 09:50:44 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/18 09:51:43 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cop;
	int		i;
	int		len;
	int		deb;

	deb = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[deb] && ft_strchr(set, s1[deb]) != NULL)
		deb++;
	len = ft_strlen(s1);
	while (deb < len && ft_strchr(set, s1[len - 1]) != NULL)
		len--;
	cop = malloc((len - deb) * sizeof(char) + 1);
	if (!cop)
		return (NULL);
	while (deb < len)
	{
		cop[i++] = s1[deb++];
	}
	cop[i] = '\0';
	return (cop);
}
