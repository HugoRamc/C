#include <stdio.h>
#include <stdlib.h>

struct nodo
{
	char cadena[1024];
	int arreglo[1024];
	
};



int main()
{
	int i = 0;
	struct nodo *ptr,nodo;
	ptr=&nodo;
	while(ptr!=NULL)
	{
		
		ptr = (struct nodo *)malloc(sizeof(struct nodo));
		i++;		
	
	
	}
	
	printf("El valor total es: %d kb",5*i);
	free(ptr);
	
	return 0;
}
