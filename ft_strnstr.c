/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 09:54:47 by ofannouc          #+#    #+#             */
/*   Updated: 2022/11/12 09:54:49 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	if (to[i] == '\0')
		return ((char *)s);
	if (n == 0)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		j = 0;
		if (s[i] == to[j])
		{
			while (to[j] != '\0' && s[i + j] == to[j] && i + j < n)
				j++;
			if (to[j] == '\0')
				return ((char *)(s + i));
		}
		i++;
	}
	return (NULL);
}
