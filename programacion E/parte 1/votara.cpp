#include <stdio.h>
#include <conio.h> 
int cuestionario();
char resp1;
char resp2[3];
int main()
{
	cuestionario();
	getch();
}
int cuestionario()
{
	printf("Votara?\n");
	scanf("%S", &resp1); 
	switch(resp1)
	{
		case 'S': printf("Por quien?\n");
		          scanf("%S",&resp2);
		          printf("Usted ha votado por: %S\n",resp2);
		          break;
	    case 'N': printf("jodete pues\n");
		          break;
		default: printf("Andale pues mamon\n");
		          
	}
}
