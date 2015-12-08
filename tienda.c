#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct
{
	int id;
	char nombre[30];
	double precio;
	int existencia;
	
}articulo;

void alta(articulo *a);
void baja(articulo *a);
void imprime(articulo *a);
void cambio(articulo *a);

int main(int argc, char *argv[])
{
	char nom[30];
	articulo stock[16];
	int i=0,_id;
	
	for(i=0;i<16;++i)
	{
		alta(&stock[i]);
		
	}
	
	for(i=0;i<16;++i)
	{
		imprime(&stock[i]);
		
	}
	
	
	printf("Ingresa el id del articulo a dar de baja\n");
	
	scanf("%d",&_id);
	
	for(i=0;i<16;++i)
	{
		if(stock[i].id==_id)
		{
			baja(&stock[i]);
		}
	}
		
	printf("Ingresa el nombre del articulo a modificar\n");
	fflush(stdin);
	gets(nom);
	
	for(i=0;i<16;++i)
	{
		if(strcmp(stock[i].nombre,nom)==0)
		{
			cambio(&stock[i]);
		}
	}
	
	for(i=0;i<16;++i)
	{
		imprime(&stock[i]);
	}
	
	printf("Ingresa el nombre del articulo a buscar\n");
	fflush(stdin);
	gets(nom);
	
	for(i=0;i<16;++i)
	{
		if(strcmp(stock[i].nombre,nom)==0)
		{
			imprime(&stock[i]);
		}
	}
	


	printf("\n");
	
	return 0;
}

void alta(articulo *a)
{
	printf("\nIngresa el id: ");
	scanf("%d",&(a->id));
	
	printf("\nNombre: ");
	fflush(stdin);
	gets(a->nombre);
	
	printf("\nIngresa el precio: ");
	scanf("%lf",&(a->precio));
	
	printf("\nIngresa la existencia: ");
	scanf("%d",&(a->existencia));
	
}

void baja(articulo *a)
{
	a->existencia=0;
}

void cambio(articulo *a)
{
	printf("\nIngresa el nuevo precio: ");
	scanf("%lf",&(a->precio));
}

void imprime(articulo *a)
{
	if((a->existencia)>0)
	{
		printf("\n id = %d \n nombre = %s \n Precio = %lf \n Existencia = %d \n",a->id,a->nombre,a->precio,a->existencia);
	}
}











