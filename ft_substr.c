/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:57:11 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/14 16:58:55 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len){
	size_t i ;
    i = 0 ;
    char * substr ;
    if(len > ft_strlen(s))
        len = ft_strlen(s) - 1 ;
    substr = (char*)malloc(len * sizeof(char)+ 1 );
    if(!substr )
        return NULL;
    if(start > ft_strlen(s) - 1)
    return 0 ;
    
    while(*(s + start + i) && len-- ){
        *(substr + i ) = *(s + start + i );
        i++;
    }
    *(substr + i) = '\0';
    return substr;
}
