/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:55:44 by ofannouc          #+#    #+#             */
/*   Updated: 2022/11/20 09:55:48 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lend;
	size_t	lens;
	size_t	j;

	lens = ft_strlen(src);
	if (size == 0)
		return (lens);
	lend = ft_strlen(dest);
	i = 0;
	j = 0;
	if (size <= lend)
		j = size + lens;
	else
		j = lend + lens;
	while (lend < size - 1 && src[i] != '\0')
	{
		dest[lend] = src[i];
		lend++;
		i++;
	}
	dest[lend] = '\0';
	return (j);
}
