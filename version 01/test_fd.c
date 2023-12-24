/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aohssine <aohssine@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:49:43 by aohssine          #+#    #+#             */
/*   Updated: 2023/12/21 13:00:24 by aohssine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int fd ;
	fd = open("./file.txt",O_CREAT | O_RDWR ,0722);
	if(fd == -1)
		return 0;
	write(fd,"hello",5);
	if(close(fd) == -1)
		return 0;
		

}
