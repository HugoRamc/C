#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2



typedef struct
{
	char zona[30];
	char calle[30];
	char colonia[30];
	
	
}ubiGeo;

typedef struct
{
	int clave;
	int disponibilidad;
	int precio;
	double supCub;//construida
	double terreno;//solo terreno
	char caracteristicas[200];
	
	ubiGeo lugar;
	
	
}propiedad;

void alta(propiedad casas[N]);
void imprime(propiedad casas[N]);

int main(int argc, char *argv[])
{
	
	propiedad casas[N];
	alta(casas);
	imprime(casas);
	
	
	
	printf("\n");
	return 0;
}

void alta(propiedad casas[N])
{
	int i;
	
	for(i=0;i<N;++i)
	{
		printf("\nIngresa la clave de la propiedad:  ");
		scanf("%d",&(casas[i].clave));
		printf("\nIngresa la cantidad de superficie cubierta: ");
		scanf("%lf",&(casas[i].supCub));
		printf("\nIngresa la zona en la que se encuentra la casa: ");
		fflush(stdin);
		gets(casas[i].lugar.zona);
		
		printf("\n\n");
		
		
	}
	
}

void imprime(propiedad casas[N])
{
	int i;
	for(i=0;i<N;++i)
	{
		printf("\nClave de la propiedad:  %d",casas[i].clave);
		
		printf("\nIngresa la cantidad de superficie cubierta: %lf",casas[i].supCub);
		
		printf("\nIngresa la zona en la que se encuentra la casa: %s",casas[i].lugar.zona);

		printf("\n\n");
		
	}
}
