#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jour, mois, annee;


    printf("Entrer le jour (De 1 a 31) :\n");
    scanf("%d",&jour);
    printf("Entrer le mois (De 1 a 12) :\n");
    scanf("%d",&mois);
    printf("Entrer l Annee :");
    scanf("%d",&annee);

    switch(mois) {
    	case 1:
    		printf("%d-Janvier-%d",jour,annee);
    		break;
    	case 2:
    		printf("%d-Fevrier-%d",jour,annee);
    		break;
    	case 3:
    		printf("%d-Mars-%d",jour,annee);
    		break;
		case 4:
    		printf("%d-Avril-%d",jour,annee);
    		break;
		case 5:
    		printf("%d-Mai-%d",jour,annee);
    		break;
		case 6:
    		printf("%d-Juin-%d",jour,annee);
    		break;
		case 7:
    		printf("%d-Juillet-%d",jour,annee);
    		break;
		case 8:
    		printf("%d-Aout-%d",jour,annee);
    		break;
		case 9:
    		printf("%d-Septembre-%d",jour,annee);
    		break;
		case 10:
    		printf("%d-Octobre-%d",jour,annee);
    		break;
		case 11:
    		printf("%d-Novembre-%d",jour,annee);
    		break;
		case 12:
    		printf("%d-Decembre-%d",jour,annee);
    		break;
	}

    return 0;
}
