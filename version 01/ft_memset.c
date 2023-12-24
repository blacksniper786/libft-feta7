/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 14:31:09 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/12 16:34:42 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned char	*p;

	p = (unsigned char*)b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}
