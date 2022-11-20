/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:23:03 by ofannouc          #+#    #+#             */
/*   Updated: 2022/11/07 12:55:24 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	la_taille(long n)
{
	int	cpt;

	cpt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cpt++;
	while (n)
	{
		n = n / 10;
		cpt++;
	}
	return (cpt);
}

static char	*int_to_char(long nb, char *str)
{
	int	i;

	i = la_taille(nb);
	str[i--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*p;
	long	a;
	int		i;

	a = n;
	i = la_taille(a);
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	int_to_char(a, p);
	return (p);
}
