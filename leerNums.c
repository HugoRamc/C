#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	FILE *ar,*arv;//apuntadores para archivo
	int i=0;//contador para los for
	char x[40]; //variable que va a recibir el valor que haya traido el archivo numerosAl.txt
	int nums[1000];
	ar = fopen("numerosAl.txt","r");
	arv = fopen("raices.txt","w");
	
	while((feof(ar))==0)
	{
		if(i<1000)
		{
		
			fscanf(ar,"%s",x);
			//fgets(x,40,ar);
			printf("%s\t",x);
			
			fscanf(ar,"%d",&nums[i]);
			fprintf(arv,"%d\t",nums[i]);
			
		}else
		{
			break;
		}
		
		++i;
	}
	
	fclose(arv);
	fclose(ar);
	
	
	return 0;
}
