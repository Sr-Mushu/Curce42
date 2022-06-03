#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void linhas_d_v(int *a,int *b, int *c, int *d,char **sud) 
{
	sud[3][0] = *a;
	sud[3][1] = *b;
	sud[3][2] = *c;
	sud[3][3] = *d;

	printf("%d,%d,%d,%d ",sud[0][0],sud[0][1],sud[0][2],sud[0][3]);
	printf("%d,%d,%d,%d ",sud[1][0],sud[1][1],sud[1][2],sud[1][3]);
	printf("%d,%d,%d,%d ",sud[2][0],sud[2][1],sud[2][2],sud[2][3]);
	printf("%d,%d,%d,%d ",sud[3][0],sud[3][1],sud[3][2],sud[3][3]);
	printf("\n");
}
void linhas_d_c( char **sud) 
{
	int a = 1, b = 1, c = 1, d = 1;
	while(a <= 4)
	{
		while(b <= 4)  
		{
			while(c <= 4)
			{
				while( d <= 4)
				{	
					linhas_d_v(&a,&b,&c,&d,sud);					
					d++;
				}
				d = 1;
				c++;
			}
			 c = 1;
			b++;
		}
		b = 1;
		a++;
	}	
}
void linhas_c_v(int *a,int *b, int *c, int *d,char **sud) 
{
	sud[2][0] = *a;
	sud[2][1] = *b;
	sud[2][2] = *c;
	sud[2][3] = *d;			
}
void linhas_c_c( char **sud) 
{
	int a = 1, b = 1, c = 1, d = 1;
	while(a <= 4)
	{
		while(b <= 4)  
		{
			while(c <= 4)
			{
				while( d <= 4)
				{	
					linhas_c_v(&a,&b,&c,&d,sud);	
					linhas_d_c(sud);					
					d++;
				}
				d = 1;
				c++;
			}
			 c = 1;
			b++;
		}
		b = 1;
		a++;
	}	
}
void linhas_b_v(int *a,int *b, int *c, int *d,char **sud) 
{
	sud[1][0] = *a;
	sud[1][1] = *b;
	sud[1][2] = *c;
	sud[1][3] = *d;
}
void linhas_b_c( char **sud) 
{
	int a = 1, b = 1, c = 1, d = 1;
	while(a <= 4)
	{
		while(b <= 4)  
		{
			while(c <= 4)
			{
				while( d <= 4)
				{	
					linhas_b_v(&a,&b,&c,&d,sud);
					linhas_c_c(sud);						
					d++;
				}
				d = 1;
				c++;
			}
			 c = 1;
			b++;
		}
		b = 1;
		a++;
	}
}
void linhas_a_v(int *a,int *b, int *c, int *d,char **sud) 
{
	sud[0][0] = *a;
	sud[0][1] = *b;
	sud[0][2] = *c;					
	sud[0][3] = *d;					
}
void linhas_a_c( char **sud) 
{
	int a = 1, b = 1, c = 1, d = 1;
	while(a <= 4)
	{
		while(b <= 4)  
		{
			while(c <= 4)
			{
				while( d <= 4)
				{	
					linhas_a_v(&a,&b,&c,&d,sud);
					linhas_b_c(sud);						
					d++;
				}
				d = 1;
				c++;
			}
			 c = 1;
			b++;
		}
		b = 1;
		a++;
	}	
}

int main()
{
	char **sulu = malloc(4 * sizeof(char *));
	int count = 0;
	while (count < 4)
	{
		sulu[count] = malloc(sizeof(char) * 4);
		count++;
	}
	linhas_a_c(sulu);	
} 