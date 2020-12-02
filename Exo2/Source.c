#include <stdio.h>
#include <stdlib.h>

// permet à l'utilisateur d'entrer les trois dimensions d'un
//bagage et vérifie qu'il est éligible à l'embarquement dans la cabine d'un avion puisque sa taille
//n'excède pas 55 cm x 35 cm x 25 cm.

int main() {
	int statut = 0;
	int choixUser;
	int valise = 0;
	float userVal[] = { 151,151,151 };
	float defaultVar[3];
	float temp = 0;

	defaultVar[0] = 25;
	defaultVar[1] = 35;
	defaultVar[2] = 55;

	do {
		userVal[0] = 151;
		userVal[1] = 151;
		userVal[2] = 151;
		choixUser = 2;
//Le programme pose des questions jusqu'à ce qu'il ait obtenu trois valeurs comprises entre 1 et 150 cm
		while (userVal[0] > 150) {
			printf("Dimension 1 de la valise :\n");
			scanf_s("%f", &userVal[0]);
		}

		while (userVal[1] > 150) {
			printf("Dimension 2 de la valise :\n");
			scanf_s("%f", &userVal[1]);
		}

		while (userVal[2] > 150) {
			printf("Dimension 3 de la valise :\n");
			scanf_s("%f", &userVal[2]);
		}



		while (userVal[0] > userVal[1] || userVal[1] > userVal[2] || userVal[0] > userVal[2]) {
			if (userVal[0] > userVal[1]) {
				temp = userVal[0];
				userVal[0] = userVal[1];
				userVal[1] = temp;
			}
			if (userVal[1] > userVal[2]) {
				temp = userVal[1];
				userVal[1] = userVal[2];
				userVal[2] = temp;
			}
			if (userVal[0] > userVal[2]) {
				temp = userVal[2];
				userVal[2] = userVal[0];
				userVal[0] = temp;
			}
		}

		for (int i = 0; i < 3; i++) {
			if (userVal[i] > defaultVar[i]) {
				valise = 1;
			}
		}

		if (valise == 0) {
			printf("\n===================\n");
			printf("Colis VALIDE");
			printf("\n===================\n");
		}
		else {
			printf("\n===================\n");
			printf("Colis NON VALIDE");
			printf("\n===================\n");
		}

		do {
			printf("\nSouhaitez vous rentrer un autre colis ?\n\n");
			printf("	0 - Non\n");
			printf("	1 - Oui\n\n");
			scanf_s("%d", &choixUser);
			if (choixUser == 0) {
				statut = 1;
			}
		} while (choixUser != 0 && choixUser != 1);

	} while (statut == 0);
	printf("\nFin du programme\n");
	system("pause");
}
