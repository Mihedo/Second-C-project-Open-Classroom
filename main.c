#include <stdio.h>
#include <stdlib.h>



/*En console, pour faire un menu, on fait des printf qui affichent les diff�rentes options possibles. Chaque option est num�rot�e, et l'utilisateur doit entrer le num�ro du menu qui l'int�resse.

Voici par exemple ce que la console devra afficher :
=== Menu ===
1. Royal Cheese
2. Mc Deluxe
3. Mc Bacon
4. Big Mac

Votre choix ?
Votre mission (si vous l'acceptez) :

Reproduire ce menu � l'aide de printf.

Ajouter un scanf pour enregistrer le choix de l'utilisateur dans une variable choixMenu.

Faire un switch pour dire � l'utilisateur "tu as choisi le menu Royal Cheese", par exemple.*/

int main()
{


	int menuchoice;

	printf("=== Menu ===\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("votre choix ?");
	scanf_s("%d", &menuchoice);

	switch (menuchoice)
	{
	case 1:
		printf("Ok vous avez choisis le Royal Cheese parfait nous pr�parons votre commande");
		break;
	case 2:
		printf("Ok vous avez choisis le Mc Deluxe parfait nous pr�parons votre commande");
		break;
	case 3:
		printf("Ok vous avez choisis le Mc Bacon parfait nous pr�parons votre commande");
		break;
	case 4:
		printf("Ok vous avez choisis le Big Mac parfait nous pr�parons votre commande");
	default:
			printf("Avez vous fait un voyage dans le temps ? \nCar pour l'instant nous possedon pas le menu %d " ,menuchoice);
		break;
	}
 



	return 0;
}

/*GG EZ*/