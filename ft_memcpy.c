/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:05:14 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/13 19:13:46 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n){
	char * d ;
	char * s ;
	d = (char*)dst;
	s = (char*)src;
	if( d == NULL && s == NULL )
		return dst;
	while(n--)
		*(unsigned char*)d++ = *(unsigned char*)s++;
	return dst;
}
