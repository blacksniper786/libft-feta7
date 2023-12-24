/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:49:00 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/13 13:11:44 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include<fcntl.h>
#include<stdlib.h>

int sum(int a , int b);
static void ft(unsigned int i , char* c);

int main()
{
	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	// int *ptr = ft_memchr(tab, -1, 40);
    
	// size_t	i = 0;
	// while (ptr[i])
	// {
	// 	printf("%d\t", (int)ptr[i]);
	// 	i++;
	// }

	// test memcpy; //////////////////////////////

	// char dst[20] = "abcdefghijk"; 
	// char src[] = "zy\0xw\0vu\0\0tsr";
	// char * p = (char*)ft_memcpy( dst ,((void*)0),11);
	// // char * pp = (char*)memcpy( ((void*)0) ,((void*)0),11);
	// write(1,(char*)p,20);
	// write(1,(char*)pp,20);

	//printf("%s\n",p); 
	
	// test memmove /////////////////////////////

	// char *dst;//[20] = "abcdefghijk"; 
	// char src[] = "lorem ipsum dolor sit amet";
	// dst = src + 1 ;
 
   
    //memmove("hi", NULL, 5);
	//printf(">>>>>>>>>>>>\n");
	//  ft_memmove(((void *)0), b, 5);
	// char * p = (char*)ft_memmove( dst ,"consectetur",5);
	// write(1, "mehdi ", 6);
	//char * pp = (char*)memmove( dst ,src,11);
	// write(1,(char*)p,20);
	// write(1, "mehdi ", 6);
	// write(1,(char*)pp,20);

	// test substr /////////////////////////////
	// char string[] = "i just want this part #############";
	// char *sub = ft_substr("hola",4294967295,0);
	// write(1,sub,30);
	// printf(">>>>>>>%d\n",ft_strlen(""));
	// char s1[] = "lorem ipsum";
	// char s2[] = "dolor sit amet";
	
	
	//>>>>>>>>>>>>>>>strjoin
	// printf(">>%s\n",ft_strjoin(s1,s2));
	// printf(">>%u\n",ft_strlen(s2));

	//>>>>>>>>>>atoi
	// printf("6\n=== %d\n",ft_atoi("-92233720368547700"));
	// printf("%d\n",atoi("-92233720368547700"));
	// printf("7 \n==== %d\n",ft_atoi("-9223372036854775807"));
	// printf("%d\n",atoi("-9223372036854775807"));
	// printf("8\n====%d\n",ft_atoi("-9223372036854775808"));
	// printf("%d\n",atoi("-9223372036854775808"));
	// printf("6\n=== %d\n",ft_atoi("9223372036854775806"));
	// printf("%d\n",atoi("9223372036854775806"));
	// printf("7 \n==== %d\n",ft_atoi("9223372036854775807"));
	// printf("%d\n",atoi("9223372036854775807"));
	// printf("8\n====%d\n",ft_atoi("2147483648"));
	// printf("%d\n",atoi("2147483648"));

	// >>>>>>>>>>>>> strtrim


	//>>>>>>>>>>>>>>>>>> split
	// char s[] = "hello!";
    // char c = ' ';
    // char **ss =  ft_split(s,c);
    // int i = 0 ;
    // //write(1,s,47);
    // // puts("mehdi");
    // //write(1,'\n',1);
    // while(ss[i])
	// 	printf("|%s|\n",ss[i++]);
	// puts("end of file");

	//>>>>>>>>>>>>>>>>>>>>>itoia

	// printf(">> %s\n",ft_itoa(-1586));
	// printf(">> %s\n",ft_itoa(1586));
	// printf(">> %s\n",ft_itoa(2147483647));
	// printf(">> %s\n",ft_itoa(-2147483648));
	// printf(">> %s\n",ft_itoa(2147483648));
	// printf(">> %s\n",ft_itoa(-2147483650));
	// printf(">> %s\n",ft_itoa("2"));


	//>>>>>>>>>>>>>>>     strmapi	
	// int s = 0 ;
	// char *c = "abde";
	// int (*ptr)(int,int) ;
	// char (*p)(unsigned int, char);
	// p = ft;
	// printf("%s\n",ft_strmapi(c,*	p));
	// ptr = sum; // or  &sum
	// s = ptr(1,5);// or  (*ptr)
	// printf("%d\n",s);

	// >>>>>>>>>>>>>>>> striteri

		// char c[] = "abde";
		// // void (*p)(unsigned int, char*);
		// // p = &ft;
		// printf(">>>>>>>>>>>\n");
		// ft_striteri(c,ft);
		// printf("%s\n",c);
		// // ft_striteri(char *s, void (*f)(unsigned int,char*))


	// ft_memcpy("","",5);

	//>>>>>>>>>>> ft_*_fd  ---- 4 functions


	
	// int fd ;
	// fd = open("./file1.txt",O_CREAT | O_RDWR ,0722);
	// if(fd == -1)
	// 	return 0;
	// // write(fd,"hello",5);
	// // ft_putchar_fd('z',fd);
	// // ft_putstr_fd("abdelfatah",fd);
	// // ft_putendl_fd("abdelfatah",fd);
	// ft_putnbr_fd(2147483647,fd);
	// if(close(fd) == -1)
	// 	return 0;
	// // ft_putnbr_fd(15986,fd);
	// // ft_putnbr_fd(-15986,fd);
	// // ft_putnbr_fd(0,fd);


	//>>>>>>>>>>>>> bouns >>>

	// printf("%d\n",ft_atoi("19233720368547758070"));
	// printf("%d\n",atoi("19233720368547758070"));
	// int p[10];
	// ft_memset(p,-1,40);
	// int i =0;
	// 	printf("ft_memset\n");
	// while (i< 10)
	// {
	// 	printf("%d\t",p[i]);
	// 	i++;
	// }
	// printf("\n");
	// printf("memset\n");
	// memset(p,-1,40);
	// i = 0;
	// while (i< 10)
	// {
	// 	printf("%d\t",p[i]);
	// 	i++;
	// }
	
	// lstnew >>>>>>>>>>>>>

	char d[] = "abde!!!";
	t_list *n ;
	n = ft_lstnew(d);
	printf("%s\n",n->content);
	printf("%p\n",n->next);

	return 0 ;
}

// int sum(int a , int b){
// 	return a +  b ;
// }
// static char ft(unsigned int i , char c){
// 	(void)i;
// 	return  ft_toupper(c);
// }

// static void ft(unsigned int i , char* c){
// 	(void)i;
// 	// *c = ft_toupper(*c) ;
// 	// printf("%c\n",*c);
// 	*c = *c + 1 ;
// }

/*
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<ctype.h>
#include"libft.h"
#include<string.h>
int main(int ac , char** av )
{
	(void)ac;
	char *p = "123123123"; 
	char cc = 'H';
	char ccc = 'h';
	char c3 = 'a' ;
	//printf("%d",cc);
	int c = isalpha(cc);
	int d = ft_isalpha(cc);
	
	printf("atoi : %d\n",atoi(p));
	printf("ft_atoi : %d\n",ft_atoi(p));
	printf("isaplha : %d\n",c);
	printf("ft_isalpha : %d\n",d);
	printf("ft_strlen :  %u\n",ft_strlen(p));
	printf("strlen : %lu\n",strlen(p));
	printf("strdup : %s\n",strdup(p));
	printf("ft_strdup : %s \n",ft_strdup(p));
	printf("toupper : %c \n",toupper(cc));
	printf("ft_toupper : %c \n",ft_toupper(cc));
	printf("tolower : %c \n",tolower(ccc));
	printf("ft_tolower : %c \n",ft_tolower(ccc));
	printf("isdigit : %d \n",isdigit(c3));
	printf("ft_isdigit : %d \n",ft_isdigit(c3));
	printf("isalnum : %d \n",isalnum(c3));
	printf("ft_isalnum : %d \n",ft_isalnum(c3));
	printf("ascii : %d \n",isascii(128));
	printf("ft_ascii : %d \n",ft_isascii(128));
	printf("isprint : %d \n",isprint(128));
	printf("ft_isprint : %d \n",ft_isprint(128));
    
	// Example usage of ft_memset
    char str[20];
    char str1[20];

    unsigned int size = 10;
	
	char *ptr = str ;
	char *ptr1 = str1 ;

    // Initialize str with some values
    printf("ft string: ");
    for (unsigned int i = 0; i < size; i++) {
        str[i] = 'A' + i;
        printf("%c ", str[i]);
    }
	printf("\n");
	printf("c Original string: ");
    for (unsigned int j = 0; j < size; j++) {
        str1[j] = 'A' + j;
        printf("%c ", str1[j]);
		}
    printf("\n");
	printf("\t%lu\t%lu\n",sizeof(str),sizeof(ptr));
    //Use ft_memset to set the remaining part of the array to 'X'
   	ft_memset(str + size, 'X', sizeof(str) - size + 1 );
    ft_memset(str + size, 'X', sizeof(str) - size  );
    memset(str1 + size, 'X', sizeof(str1) - size  );

    // Print the modified string
    printf("ft Modified string: ");
    for (unsigned int i = 0; i < sizeof(str); i++) {
        printf("%c ", str[i]);
    }
    printf("\n");
	printf("c Modified string: ");
    for (unsigned int i = 0; i < sizeof(str1); i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");
    return 0;
	char h[10] = "AAAAAAAAAA";
  
  	void *ptr ;
  	ptr = (char*)h;
  	int i ;
  	i = 0 ;
  	*while(h[i] != '\0')
 	 {
    h[i] = 'A';
    i++;
  	}
	void	*mem;
	mem = malloc(sizeof(*mem) * 5);
  	ft_bzero(h,5);
  	while(h[i])
  	  printf("%c\t",h[i++]);
  	printf("\n");
	char dest[15];
	char src[]= "the cake is a lie !\0I'm hidden lol\r\n";
	printf("ft_strncmp : %d \n",ft_strncmp(av[1],av[2],atoi(av[3]) ) );
	printf("strncmp : %d \n",strncmp(av[1],av[2],atoi(av[3]) ) );
	printf("ft_strlcpy : %u \n",ft_strlcpy(dest,av[1],atoi(av[2]) ) );
	printf("strlcpy : %lu \n",strlcpy(dest,av[1],atoi(av[2]) ) );
	
	ft_memset(dest,'r',6);
	dest[0]='\0';
	printf("%s\n",dest);
	printf("> src + dst - 1 >> %u\t>> dest >> %s \n",ft_strlcat(dest,src,15),dest);
	printf(">> %s \n",src);
	char * pp = ft_strnstr("","",-1);
	printf(">>> p >> %s \n",pp);
	ft_strchr(dest,'c');
	printf("strrchr>>%s\n",strrchr(src,' '));
	printf("ft_strrchr>>%s\n",ft_strrchr(src,' '));
	}
	*/