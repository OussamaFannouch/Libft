/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:45:50 by ofannouc          #+#    #+#             */
/*   Updated: 2022/10/08 09:45:51 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		i;

	p = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			p = (char *)(s + i);
		i++;
	}
	if (s[i] == (char)c)
		p = (char *)(s + i);
	return (p);
}
