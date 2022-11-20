/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:58:08 by ofannouc          #+#    #+#             */
/*   Updated: 2022/10/13 17:58:10 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	n;

	i = 0;
	if (s)
	{
		n = ft_strlen(s);
		if (start >= n)
			return (ft_strdup(""));
		if (len > n)
			len = n;
		p = (char *)malloc(sizeof(char) * (len + 1));
		if (!p)
			return (NULL);
		while (i < len && s[start] != '\0' && start < n)
		{
			p[i] = s[start];
			start++;
			i++;
		}
		p[i] = '\0';
		return (p);
	}
	return (NULL);
}
