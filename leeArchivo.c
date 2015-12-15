#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	FILE *ar;
	ar = fopen("cadenas.txt","r");
	char cad[40];
	
	if(ar==NULL)
	{
		printf("Error abriendo el archivo");
	}else
	{			
		while(feof(ar)==0)//la funcion regresa 0 no es el final del archivo 
		{
			fgets(cad,40,ar);
			//puts(cad);
			printf("%s",cad);
			
		}	
	
	}
	
	fclose(ar);
	
	return 0;
}
