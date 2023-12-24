#include<stdio.h>
#include<unistd.h>
#include"libft.h"
#include<stdlib.h>
/*unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int srcsize;
	unsigned int d_len;
	unsigned int i ;
	d_len = 0 ;
	i = 0 ;
	srcsize = 0 ;
	while(src[srcsize++]);
	while(dst[d_len++]);
	--d_len;
	--srcsize;
	printf(">>>>>>>>>>>>>.%u\n",d_len);
	printf(">>>>>>>>>.>>>>.%u\n",srcsize);
	while(*src && i < (dstsize - d_len - 1 )  && dstsize){
		dst[d_len - 1 + i ] = (unsigned char)*src++;
		printf("%c\t",dst[d_len - 1 + i]);
		i++;
	}
	if(dstsize)
		*dst = '\0';
	return (srcsize + d_len );
}*/

int main(int ac , char **av)
{
	(void)av;
	char dest[15] = "rrrrrr";
	printf("\n%u\n",ft_strlcat(dest,av[1],15));
	printf("%s\n", dest);
	ft_strchr(dest,'c');
}
