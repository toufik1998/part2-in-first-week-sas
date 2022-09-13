#include <stdio.h>
#include <stdlib.h>

int main()
{
    double N1,N2,N3,N4,N5,Moy;

	printf("Entrer Votre Note : ");
	scanf("%lf %lf %lf %lf %lf",&N1,&N2,&N3,&N4,&N5);
	Moy=(N1+N2+N3+N4+N5)/5 ;

	if(Moy<10)

	{
		printf("Redoublant");
	}
    else if (Moy>=10 && Moy<12)
	{
		printf("Mention Passable");
	}
    else if (Moy>=12 && Moy<14)
	{
		printf("Mention Assez Bien");
	}
	else if (Moy>=14 && Moy<16)
	{
		printf("Mention Bien");
	}
	else
	{

		printf("Mention Tres Bien");
    }
    return 0;
}
