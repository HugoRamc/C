#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void validaCaracter(char);

int main(int argc, char *argv[])
{
	int i=0;
	char cad[20];
	printf("Ingresa una frase: ");
	gets(cad);
	printf("\n");
	
	while(cad[i] != NULL)
	{
		validaCaracter(cad[i]);
		++i;
	}
	
	
	printf("\n");
	return 0;
}

void validaCaracter(char c)
{
			
	//fflush(stdin);//Borra entrada previa
	
	if(isdigit(c)==1)
	{
		printf(" %c es un digito :D \n",c);
	}else
	{
		
			if(isupper(c)==0)
			{
				printf(" %c una letra minuscula \n",c);
			}else
			{
				printf(" %c una letra mayuscula \n",c);
			}
			//printf(" shi");
		
		
	}
	
}

//https://es.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/fast-modular-exponentiation

//liga de exponenciacion modular
