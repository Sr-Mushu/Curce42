/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:46:03 by dagabrie          #+#    #+#             */
/*   Updated: 2022/03/15 17:18:15 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main()
{
	//variaveis
	int I = -21478;
	int long II = 123173;
	int long long III = -12321;
	char C =';';
	char S[6] = "heLLo";
	int Return = 0;
	unsigned int U = 0x7b;
	//exemple
	/*
	ft_printf("\n---Print-test----\n");
	Return = printf("hello - Original\n");printf("%d\n",Return);
	Return = ft_printf("hello - House made\n");printf("%d\n",Return);
	//teste inteiro
	ft_printf("--------i--------\n");
	Return = printf("%i\n",I);printf("%d\n",Return);
	Return = ft_printf("%i\n",I);printf("%d\n",Return);
	Return = printf("%i\n",II);printf("%d\n",Return);
	Return = ft_printf("%i\n",II);printf("%d\n",Return);
	Return = printf("%i\n",III);printf("%d\n",Return);
	Return = ft_printf("%i\n",III);printf("%d\n",Return);
	//teste char*/
	ft_printf("--------c--------\n");
	Return = printf("%c\n",C);printf("%d\n",Return);
	Return = ft_printf("%c\n",C);printf("%d\n",Return);
	//teste string
	/*
	ft_printf("--------s--------\n");
	Return = printf("%s\n",S);printf("%d\n",Return);
	Return = ft_printf("%s\n",S);printf("%d\n",Return);
	ft_printf("--------d--------\n");
	Return = printf("%d\n",I);printf("%d\n",Return);
	Return = ft_printf("%d\n",I);printf("%d\n",Return);
	ft_printf("--------u--------\n");
	Return = printf("%u\n",U);printf("%d\n",Return);
	Return = ft_printf("%u\n",U);printf("%d\n",Return);
	ft_printf("--------x--------\n");
	Return = printf("%x\n",I);printf("%d\n",Return);
	Return = ft_printf("%x\n",I);printf("%d\n",Return);
	ft_printf("--------X--------\n");
	Return = printf("%X\n",I);printf("%d\n",Return);
	Return = ft_printf("%X\n",I);printf("%d\n",Return);
	ft_printf("--------%%-------\n");
	Return = printf("%c%%%cc%c%%%c\n",C,C,C,C);printf("%d\n",Return);
	Return = ft_printf("%c%%%cc%c%%%c\n",C,C,C,C);printf("%d\n",Return);
	*/
}
