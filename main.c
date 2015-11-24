#include <stdio.h>
#include <stdlib.h>

void tiradas(char [3][3],int);
int validarTablero(char [3][3]);
int validarFilas(char [3][3]);
int validarColumnas(char [3][3]);
int validarDiagonales(char [3][3]);
int cont = 2;

int main(int argc, char *argv[])
{
	int i,j,contv=0;
	char gato[3][3] = {'a','a','a','a','a','a','a','a','a'};
	
	int turno = 2;
	
	while(cont != 0)//Ganador con 0 las o ganador con 1 las x
	{
		cont = validarTablero(gato);
		if(cont == 1)
		{
			break;
		}
		
		if(turno == 2)
		{
			turno =1;
		}else
		{
			if(turno == 1)
			{
				turno =2;
			}
		}
		tiradas(gato,turno);
		
		for(i=0;i<3;++i)
		{
			for(j=0;j<3;++j)
			{
				if(gato[i][j]=='a')
				{
					contv++;
				}
			}
		}
		if(contv == 0)
		{
			printf("Nadie Gano, :v");
			printf("\n");
			cont =0;
		}
	
		
		
	}

	printf("Gracias por jugar gato :D");	
	return 0;
}

void tiradas(char tablero[3][3],int turno)
{
	int i,j,ip,jp,contv=0;
	
	printf("   0    1   2   ");
	printf("\n"); 
	for(i=0;i<3;++i)//imprime el tablero
	{
		printf("%d  ",i);
		
		for(j=0;j<3;++j)
		{
			
			if(tablero[i][j] == 'a')
			{
				printf("  |  ");
			}else
			{
				if(tablero[i][j] == 'X' || tablero[i][j] == 'x')
				{
					printf(" X  |");
				}else
				{
					if(tablero[i][j] == 'O' || tablero[i][j] == 'o')
					{
						printf(" O  |");
					}
				}
			}
		}
		printf("\n");
		
	}
	
	printf("\n");
	
	printf("Seleccione las coordenadas de la casilla a tirar\n");
	printf("fila: ");
	scanf("%d",&ip);
	printf("\n Columna: ");
	scanf("%d",&jp);
	
	if(tablero[ip][jp]!='X' && tablero[ip][jp]!='O')
	{
		if(turno == 1)
		{
			tablero[ip][jp] = 'X';
		}else
		{
			if(turno == 2)
			{
				tablero[ip][jp] = 'O';
			}
		}
	}else
	{
	
		for(i=0;i<3;++i)
		{
			for(j=0;j<3;++j)
			{
				if(tablero[i][j]=='a')
				{
					contv++;
				}
			}
		}
		if(contv == 0)
		{
			printf("Nadie Gano, :v");
			printf("\n");
			cont =0;
		}else
		{
				printf("\n Casilla ocupada: Vuelve a Tirar");
				printf("\n\n\n");
				tiradas(tablero,turno);
		}
		
	}
	
}


int validarTablero(char tablero[3][3])
{
	int i=0,j=0, ganador=0;

	ganador = validarFilas(tablero);
	if(ganador == 1)
	{
		ganador = 1;
		return ganador;
	}else
	{
		ganador = validarColumnas(tablero);
		if(ganador == 1)
		{
			ganador = 1;
			return ganador;
		}else
		{
			ganador = validarDiagonales(tablero);
			if(ganador == 1)
			{
				ganador = 1;
				return ganador;
			}
				
							
		}
	}
	
	return ganador;
}

int validarFilas(char tablero[3][3])
{
	int gan =0,i,j;
	for(i=0;i<3;i++)
	{
		
		if((tablero[i][j] == "O" || tablero[i][j] == "o")&& (tablero[i][j+1] == "O" || tablero[i][j+1] == "o") && (tablero[i][j+2] == "O" || tablero[i][j+2] == "o"))
		{
			printf("El ganador es el jugador 1\n\n");
			gan = 1;
			break;
		}else
		{
			if((tablero[i][j] == "X" || tablero[i][j] == "x")&& (tablero[i][j+1] == "X" || tablero[i][j+1] == "x") && (tablero[i][j+2] == "X" || tablero[i][j+2] == "x"))
			{
				printf("El ganador es el jugador 2\n\n");
				gan = 1;
				break;
			}else
			{
				gan = 2;
			}
		}
		j=0;
	}
	return gan;
}

int validarColumnas(char tablero[3][3])
{
	int gan =0,i,j;
	for(i=0,j=0;j<3;j++)
	{
		
		if((tablero[i][j] == "O" || tablero[i][j] == "o")&& (tablero[i+1][j] == "O" || tablero[i+1][j] == "o") && (tablero[i+2][j] == "O" || tablero[i+2][j] == "o"))
		{
			printf("El ganador es el jugador 1");
			gan = 1;
			break;
		}else
		{
			if((tablero[i][j] == "X" || tablero[i][j] == "x")&& (tablero[i+1][j] == "X" || tablero[i+1][j] == "x") && (tablero[i+2][j] == "X" || tablero[i+2][j] == "x"))
			{
				printf("El ganador es el jugador 2");
				gan = 1;
				break;
			}else
			{
				gan = 2;
			}
		}
		i=0;
	}
	return gan;
}

int validarDiagonales(char tablero[3][3])
{
		int gan =0,i,j;
	
		
		if((tablero[0][0] == "O" || tablero[0][0] == "o")&& (tablero[1][1] == "O" || tablero[1][1] == "o") && (tablero[2][2] == "O" || tablero[2][2] == "o"))
		{
			printf("El ganador es el jugador 1");
			gan = 1;
			
		}else
		{
			if((tablero[0][2] == "O" || tablero[0][2] == "o")&& (tablero[1][1] == "O" || tablero[1][1] == "o") && (tablero[2][0] == "O" || tablero[2][0] == "o"))
			{
				printf("El ganador es el jugador 1");
				gan = 1;
				
			}else
			{
					if((tablero[0][0] == "X" || tablero[0][0] == "x")&& (tablero[1][1] == "X" || tablero[1][1]== "x") && (tablero[2][2] == "X" || tablero[2][2] == "x"))
					{
						printf("El ganador es el jugador 2");
						gan = 1;
						
					}else
					{
						if((tablero[0][2] == "X" || tablero[0][2] == "x")&& (tablero[1][1] == "X" || tablero[1][1] == "x") && (tablero[2][0] == "X" || tablero[2][0] == "o"))
						{
							printf("El ganador es el jugador 2");
							gan = 1;
							
						}else
						{
							gan = 2;
						}
					}
			}
		}
		
	return gan;
}
