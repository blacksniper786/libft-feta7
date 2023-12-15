/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:43:10 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/08 16:12:55 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*o;
	char	*p;

	i = 0;
	while (s1[i])
		i++;
	o = (char *)malloc(i * sizeof(char) + 1);
	if (!o)
		return (NULL);
	p = o;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (o);
}
