#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct
{
	int clave;
	int existencia;
	double precio;
	char nom[30];
	
}producto;

void imprimir(producto *a);//imprimir todos los productos y su existencia
void resurtir(producto *a);//remplazar la existencia con igual o menor unidades a 10 por 100
void consultaLetra(producto *a,char);
void alta(producto *a);
void valor(producto *a);//imprimir la cantidad de productos en precio

int main(int argc, char *argv[])
{
	
	char opc = 's';
	int menu,i;
	producto stock[N];
	
	while(opc=='s')
	{
		printf("\n\t Bienvenido al Inventario");
		printf("\n\n por favor seleccione una opción");
		printf("\n1.- Alta de Productos");
		printf("\n2.- Imprimir productos");
		printf("\n3.- Resurtir Productos");
		printf("\n4.- Buscar Producto por letra");
		printf("\n5.- Salir\n");
		
		scanf("%d",&menu);
		
		if(menu==5)
		{
			opc='n';
			printf("Gracias por Usar \"Stock\"");
			
		}els
			if(menu==1)
			{
				printf("\n\t Bienvenido a \"Alta de Productos\"\n");
				for(i=0;i<N;++i)
				{
					alta(&stock[i]);
					
				}
				
				
				
			}else
			{
		
				if(menu==2)
				{
					
				}else
				{
					if(menu==3)
					{
					
					}else
					{
						if(menu==4)
						{
							
						}
					}
					
				}
			}
		}
		{
		
		}
			   
		   
		   
			  
		  
	return 0;
}

void alta(producto *a)
{
	
	printf("\nIntroduce la Id del producto: ");
	scanf("%d",&(a->clave));
	
	printf("\nintroduce ");
	

}



	
	
	
	

