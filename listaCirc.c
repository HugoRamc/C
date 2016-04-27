#include <stdio.h>
#include <stdlib.h>
//sacarInicio 
//sacarFinal
struct Nodo
{
	int dato;
	struct Nodo *ptrSig;
	struct Nodo *ptrAnt;

};

struct Nodo *ptrIni,*ptrFin;

void meterInicio(int dato1)
{
	struct Nodo *ptrNuevo;
	ptrNuevo = (struct Nodo *)malloc(sizeof(struct Nodo));

	printf("\nMeter al inicio");
	ptrNuevo->dato=dato1;
	ptrNuevo->ptrSig=NULL;

	if(ptrIni==NULL)
	{
		printf("\nEs el primer nodo\n");
		ptrIni=ptrNuevo;
		ptrIni->ptrAnt = ptrNuevo;
		ptrIni->ptrSig=ptrIni;//apunta al mismo nodo
		ptrFin=ptrNuevo;

	}else
	{
		
		ptrNuevo->ptrSig=ptrIni;
		ptrIni->ptrAnt=ptrNuevo;
		ptrIni=ptrNuevo;
		
		ptrFin->ptrSig=ptrIni;

	}

}

void meterFinal(int dato1)
{
	struct Nodo *ptrNuevo;
	ptrNuevo = (struct Nodo *)malloc(sizeof(struct Nodo));
	printf("\nMeter al final");

	ptrNuevo->dato=dato1;

	if(ptrIni==NULL)
	{
		printf("primer nodo");
		ptrIni=ptrNuevo;
		ptrIni->ptrAnt = ptrNuevo;
		ptrIni->ptrSig=ptrIni;//apunta al mismo nodo
		ptrFin=ptrNuevo;

	}else
	{
		ptrNuevo->ptrAnt = ptrFin;
		ptrFin->ptrSig=ptrNuevo;
		ptrNuevo->ptrSig = ptrIni;
		ptrFin=ptrNuevo;

	}


}

void mostrarlistaInicio()
{
	struct Nodo *ptrRecIni;
	ptrRecIni = ptrIni;

	if(ptrIni == NULL)
	{
		printf("La lista está vacia lel \n");

	}else
	{
		while(ptrRecIni!=ptrFin)
		{
			printf("\n %d",ptrRecIni->dato);
			ptrRecIni=ptrRecIni->ptrSig;

		}
		
		printf("\n %d",ptrRecIni->dato);

	}

}

void mostrarListaFinal()
{
	struct Nodo *ptrRecFin;
	ptrRecFin = ptrFin;
	
	if(ptrFin == NULL)
	{
		printf("La lista está vacia lel \n");

	}else
	{
		while(ptrRecFin!=ptrIni)
		{
			printf("\n %d",ptrRecFin->dato);
			ptrRecFin=ptrRecFin->ptrAnt;

		}
		
		printf("\n %d",ptrRecFin->dato);

	}
	
}

void sacarInicio()
{
	struct Nodo *ptrAux;
	ptrAux = ptrIni;
	if(ptrFin==ptrIni)
	{
		printf("Solo hay un elemento");
		printf("el dato a eliminar es %d",ptrIni->dato);
		free(ptrAux);
		ptrIni=NULL;
		ptrFin=NULL;

	}else
	{
		printf("el dato a eliminar es %d",ptrAux->dato);
		ptrFin->ptrSig=ptrIni->ptrSig;
		ptrIni=ptrIni->ptrSig;
		free(ptrAux);

	}
	
}

void sacarFinal()
{	
	struct Nodo *ptrRec,*ptrAux;
	ptrRec = ptrIni;
	ptrAux = NULL;

	if(ptrRec == ptrFin)
	{
		printf("Solo hay un elemento");
		printf("el dato a eliminar es %d",ptrIni->dato);

		ptrIni=NULL;
		ptrFin=NULL;

	}

	if(ptrIni != NULL)
	{
		//recorrer lista
		while(ptrRec!=ptrFin)
		{
			//verificar si en realidad es el último elemento
			if(ptrRec->ptrSig==ptrFin)
			{
				ptrAux = ptrFin;//hacemos la asignacion de apuntadores para despues liberarlos
				ptrFin = ptrRec;
				ptrFin->ptrSig = ptrIni;
				printf("el dato a eliminar es %d",ptrAux->dato);
				free(ptrAux);
				break;

			}
			ptrRec = ptrRec->ptrSig;
		}
	}




}


int main()
{
	int op,dato1;
	
	
	do
	{
		printf("\n\nSeleccione una opcion: \n\n 1.-Meter dato(al incio)\n 2.-Meter al final\n 3.-Mostrar Lista (Inicio)\n 4.-Mostrar Lista (Final)\n 5.-Sacar al inicio\n 6.-Sacar al final\n 7.-Salir\n\n");

		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("\n Ingresa el dato: ");
				scanf("%d",&dato1);
				meterInicio(dato1);
			break;
			case 2:
				printf("\n Ingresa el dato: ");
				scanf("%d",&dato1);
				meterFinal(dato1);
			break;
			case 3:	
				mostrarlistaInicio();
			break;
			case 4:
				mostrarListaFinal();
				
			break;
			case 5:
				sacarInicio();
			break;
			case 6:
				sacarFinal();
			break;
			case 7:
				exit(0);
			break;
			default:
			printf("Ingrese una opción válida");
		

		}
	}while(op!=7);



	return 0;
}
