#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	
	char cad[50],nombre[30];
	int edad;
	int res;
	FILE *ar;
	
	ar = fopen("cadenas.txt","a");
	
	if(ar==NULL)
	{
		printf("Error de apertura en el archivo");
	}else
	{
		printf("Introduce tu nombre: \n");
		fflush(stdin);
		gets(nombre);
		
		printf("\n Introduce tu edad: \n");
		scanf("%d",&edad);
		
		fprintf(ar,"Nombre: %s \nEdad: %d \n",nombre,edad);
	}
	
	printf("%x",ar);
	
	fclose(ar);
	
	printf("\n");
	return 0;
}
