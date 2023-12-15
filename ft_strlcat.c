/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:59:55 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/12 12:30:22 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int dstsize)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	x;
	unsigned int	y;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	x = 0;
	y = d_len;
	if (d_len >= dstsize)
		return (dstsize + s_len);
	while (src[x] && (x < dstsize - d_len - 1))
	{
		dest[y] = src[x];
		x++;
		y++;
	}
	dest[y] = '\0';
	return (d_len + s_len);
}
