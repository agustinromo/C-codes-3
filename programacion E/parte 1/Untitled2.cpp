#include <stdio.h>
int arreglo1[5]={23,45,67,89,13};
int arreglo2[8]={2,1,4,8,5,6,7,23}; 
int main()
{
   for(int i=0; i<3; i++)
   {
	  printf("datos %d\n",arreglo1[arreglo2[i]]);
   }	
}

