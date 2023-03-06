/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:13:13 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/23 11:18:14 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_check_word(char const *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (j);
}

static int	ft_size_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_cop(char const *s, int i, char c)
{
	char	*res;
	int		k;

	k = 0;
	res = malloc(ft_size_word(&s[i], c) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	while (s[i] != c && s[i])
	{
		res[k] = s[i];
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}

void	*ft_free(char **res, int n)
{
	while (n >= 0)
	{
		free(res[n]);
		n--;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	res = malloc((ft_check_word(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c && s[i])
		{
			res[j] = ft_cop(s, i, c);
			if (!res[j])
				return (ft_free(res, j));
			i = i + ft_strlen(res[j]);
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
