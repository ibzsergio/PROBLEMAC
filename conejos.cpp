#include<stdio.h>
int main ()
{
	int p,c,pal,con;
	printf("INTRODUCE EL NUMERO DE PATAS:");
	scanf("%d",&p);
	printf("INTRODUCE EL NUMERO DE CABEZAS:");
	scanf("%d",&c);
	con=(p-(2*c))/2;
	pal=c-con;
	printf("\n\nEL NUMERO DE CONEJOS ES: %d",con);
	printf("\n\nEL NUMERO DE PALOMAS ES: %d",pal);
	printf("CAMBIOS APLICADOS EXITOSAMENTE");
	return 0;
	
}
