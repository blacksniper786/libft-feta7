// #include "libft.h"

#include<stdio.h>
#include<stdlib.h>

unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i++])
		;
	return (--i);
}

char *ft_substr(char const *s, unsigned int start, size_t len){
	size_t i ;
    i = 0 ;
    char * substr ;
    if(start > ft_strlen(s))
		start = ft_strlen(s);
    if(len > (ft_strlen(s)- start ) )
        len = ft_strlen(s) - start;
	
    substr = (char*)malloc(len * sizeof(char)+ 1 );
	if(!substr)
		return NULL;
	while(*(s + start) && len-- ){
        *(substr + i ) = *(s + start++ );
        i++;
    }
    *(substr + i) = '\0';
    return substr;
}

int main(){
    char *s = "abcdefghijklmno";
    char **arr ;
    arr = (char **)malloc(5 * sizeof(char*));
    int i = 0 ;
    while(i < 5){
        arr[i] = ft_substr(s,i,5);
        // printf("%s",)
        i++;
    }
    i = 0 ;
    while(i < 5 ){
        printf("%s\n",(*arr + i));
    }
}