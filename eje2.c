#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int matriz[6][4];
	int i,j,num=0;
	
	for(i=0;i<6;++i)
	{
		for(j=0;j<4;++j)
		{
			num = (rand()%10);
			matriz[i][j] = num;
			printf("  %d  |",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n\n");
	
	for(i=5;i>=0;--i)
	{
		for(j=0;j<4;++j)
		{
			printf("  %d  |",matriz[(i)][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
