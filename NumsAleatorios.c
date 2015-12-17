#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	int val,i;
	FILE *ar;
	srand (time(NULL));
	
	ar = fopen("numerosAl.txt","w");
	
	if(ar==NULL)
	{
		printf("Error al abrir el archivo");
	}else
	{
		for(i=0;i<1000;++i)
		{
			val = (rand()%100);
			//printf("imprimiendo numero: %d",val);
			fprintf(ar,"%d\t",val);
		}
	}
	
		fclose(ar);
	
	return 0;
	
	//makigas
}
