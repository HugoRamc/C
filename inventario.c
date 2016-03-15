#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct articulo {
	char nombre [20];
	int existencia;
	double precio;
	struct articulo * siguiente; //Direcciones
};


struct articulo * primero;
struct articulo * ultimo;


void menu(){
	printf("\nBienvenido a Tiendita \n =======\n\n");
	printf("\n1.-Agregar producto\n");
	printf("\n2.-Borrar producto\n");
	printf("\n3.-Desplegar Inventario\n");
	printf("\n4.-Resurtir Producto\n");
	printf("\n5.-Guardar Inventario");
	printf("\n6.-Salir\n");
	printf("\nElige una opcion\n");
}



void agregar (){
	//System("CLS");
	struct articulo * nuevo;
	nuevo= (struct articulo *)malloc(sizeof(struct articulo));
	
	if(nuevo==NULL){
		printf("\nMemoria agotada\n");
		return;
	}
	else {
		printf("\nNombre:\n");    fflush(stdin);     gets(nuevo->nombre);
		printf("\nPrecio:\n");     scanf("%lf",&nuevo->precio);
		printf("\nExistencia:\n"); scanf("%d",&nuevo->existencia);
		nuevo->siguiente=NULL; 
	}
	
	//vacia
	if(primero==NULL){
		primero=nuevo;
		ultimo=nuevo;
	}
	else{//Ya existen elementos
		ultimo->siguiente=nuevo;
		ultimo=nuevo;
	}
	
	
}//void agregar



void mostrar (){
	//system("CLS");
	struct articulo * auxiliar;
	auxiliar=primero;
	
	if(auxiliar==NULL){
		printf("\nLista vacia\n");
		return;
	}
	else{
		while(auxiliar!=NULL){
			printf("\nNombre: %s \n", auxiliar->nombre);
			printf("Precio: %lf \n", auxiliar->precio);
			printf("Existencia: %d \n", auxiliar->existencia);
			auxiliar=auxiliar->siguiente;
		}
	}
}



void borrar (){
	//System("CLS");
	struct articulo * auxiliar;
	
	if(primero==NULL){
		printf("\nVacia");
		return;
	}
	else{
		if(primero==ultimo)//si hay solo un dato
		{
          free(auxiliar);
          primero = NULL; 
		  ultimo = NULL;             
	    }else
	    {
	    	auxiliar = primero;
	    		while(auxiliar->siguiente!=ultimo){
	    			auxiliar=auxiliar->siguiente;
	    		}
	    		
	    		free(ultimo->siguiente);
	    		ultimo=auxiliar;
	    		ultimo->siguiente=NULL;   
	      
	   }
	}
	
	
}//void borrar

void resurtir()
{
	struct articulo * auxiliar;
	auxiliar=primero;
	
	if(auxiliar==NULL){
		printf("\nLista vacia\n");
		return;
	}
	else{
		while(auxiliar!=NULL){
			auxiliar->existencia += 10;
			auxiliar=auxiliar->siguiente;
		}
	}
}

void guardar()
{
	struct articulo * auxiliar;
	FILE *aux;
	auxiliar=primero;
	
	aux = fopen("inventario.txt","w");
	
	if(auxiliar==NULL){
		printf("\nLista vacia\n");
		return;
	}
	else{
		while(auxiliar!=NULL){
			fprintf(aux,"%s\n%lf\n%d\n",auxiliar->nombre,auxiliar->precio,auxiliar->existencia);
			auxiliar=auxiliar->siguiente;

		}
		
		fclose(aux);
	}
}

void bajarInventario()
{
	FILE *ar;
     struct articulo * nuevo;
     int cont = 1;
     char nom [20];
     char pre [20];
     char exis [20];
     
     nuevo=(struct articulo*)malloc(sizeof(struct articulo));
     ar=fopen("inventario.txt","r"); 
     
 	if(nuevo==NULL)
 	{
 		printf("\nMemoria agotada\n");
		return;	
		 		 	
	}else
	{
		if(ar!= NULL)
		{ 
	 		while(!feof(ar))
			 { 
	 		
	 			fscanf(ar,"%s\n",nuevo->nombre); 
	 			fscanf(ar,"%s\n",pre);
				fscanf(ar,"%s\n",exis);
				
				nuevo->precio = atoi(pre);
				nuevo->existencia = atof(exis);
				
				nuevo->siguiente=NULL;  
				
		 	
					primero=nuevo;
					ultimo=nuevo;
			
		
	 		} 
	 			
	 	} 
	 	fclose(ar); 
		
	}
}


int main(int argc, char *argv[]) {
	
	FILE *ar;
	
	primero==NULL;
	ultimo==NULL;
	int op; 
	
	ar = fopen("inventario.txt","a");
	
	if(ar==NULL)
	{
		printf("Error al abrir el inventario");
	}else
	{
			fclose(ar);
			bajarInventario();
			
					
			do{
			menu();
			scanf("%d",&op);
			switch(op){
				
				case 1: agregar(); break;
				case 2: borrar(); break;
				case 3: mostrar(); break;
				case 4: resurtir(); break;
				case 5: guardar(); break;
				case 6: printf("\nFin\n"); break;
				default: printf("\nOpcion no valida\n"); break;
			}
		}while(op!=6);
	}


	return 0;
}
