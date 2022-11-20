/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofannouc <ofannouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:58:21 by ofannouc          #+#    #+#             */
/*   Updated: 2022/11/07 18:26:29 by ofannouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	kyn(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*s;

	if (!s1)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	l = ft_strlen(s1);
	i = 0;
	while (kyn(s1[i], set) == 1)
		i++;
	if (i == l)
		return (ft_strdup(""));
	while (kyn(s1[l - 1], set) == 1)
		l--;
	s = ft_substr(s1, i, l - i);
	return (s);
}
