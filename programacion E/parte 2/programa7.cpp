#include <stdio.h>
#include <conio.h> 
int i=0; 
int main()
{
	int n[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};                                             
	int i=0, x=0, var=0,cont_var=0;
	
	for(i=0; i<10; i++)
	{
		printf("Ingresa un numero en la posicion %d\n",i);
		scanf("%d",&n[i]);                      
	}
	printf("Que numero deseas encontrar:\n");
	scanf("%d",&var);
	for(i=0; i<10; i++)                         
	{
	 if (var==n[i])                           
       {
           cont_var++;
       }
     
    }
       	printf("El valor se encuentra %d vez(es) en el arreglo\n",cont_var);
       	return 0;
}
