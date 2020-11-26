#include <stdlib.h>
#include <stdio.h>

#include <math.h>


int main() {
    int annee;

    printf("Saisir une date : ");
    scanf_s("%d", &annee);
    if (annee % 100 == 0)
    {
        printf("%d : l annee n est pas bissextile\n", annee);
    }
    else if (annee % 4 == 0 || annee % 400 == 0)
    {
        printf("%d : l annee est bissextile\n", annee);
    }

    int annee2;

    printf("Saisir une date : ");
    scanf_s("%d", &annee2);
    if (annee2 % 100 != 0 && (annee2 % 4 == 0 || annee2 % 400 == 0))
    {
        printf("%d : l annee est bissextile\n", annee2);
    }
    else
    {
        printf("%d : l annee n est pas bissextile\n", annee2);
    }

    system("pause");
    return(EXIT_SUCCESS);


}
