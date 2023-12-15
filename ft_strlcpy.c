/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:49:03 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/11 14:23:50 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *restrict dst, const char *restrict src,
		unsigned int dstsize)
{
	unsigned int	srcsize;
	unsigned int	i;

	i = 0;
	srcsize = 0;
	while (src[srcsize++])
		;
	while (*src && i < dstsize - 1 && dstsize)
	{
		*dst++ = (unsigned char)*src++;
		i++;
	}
	if (dstsize)
		*dst = '\0';
	return (--srcsize);
}
