/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mushu <mushu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:14:24 by mushu             #+#    #+#             */
/*   Updated: 2022/06/22 15:48:45 by mushu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "pipex.h"
//void main(int fd_input, char* cmd1[], char* cmd2[], int ft_output)
void main(char* cmd)
{
    int id = fork();
  
    printf("hello world from id = %d \n", id);
    
    if(id == 0)
    {
        printf("%s \n", cmd);
        execlp(cmd, cmd, NULL);
    }
    printf("hello world from id3 = %d \n", id);
}
