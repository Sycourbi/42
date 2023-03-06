/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycourbi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:28:05 by sycourbi          #+#    #+#             */
/*   Updated: 2022/11/21 12:49:29 by sycourbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long int nb)
{
	long int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

static char	*ft_strrev(char *res)
{
	char	swap;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(res);
	while (i < j / 2)
	{
		swap = res[i];
		res[i] = res[j - i - 1];
		res[j - i - 1] = swap;
		i++;
	}
	return (res);
}

static char	*ft_cop(char *res, long int nb, int moins)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	if (moins == -1)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	long int	nb;
	int			moins;

	nb = n;
	moins = 1;
	res = malloc(ft_nbrlen(nb) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	if (nb == 0)
	{	
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		moins = -1;
	}
	res = ft_cop(res, nb, moins);
	return (ft_strrev(res));
}
