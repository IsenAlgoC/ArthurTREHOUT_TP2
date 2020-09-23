#include <stdlib.h>
#include <stdio.h>
#include "boucle.h"

void Boucle_for(unsigned short n2)
{
    unsigned short int count = 0;
    printf("Veuillez entrer n :");
    scanf_s("%hu", &n2);

    while (n2 > 361)
    {
        printf("La valeur n ne permet pas d'avoir une somme correcte, veuillez rentrer une nouvelle valeur : ");
        scanf_s("%hu", &n2);
    }
    for (int i = 0; i <= n2; i++)
    {
        count = count + i;
    }
    printf("calcul avec boucle for : %hu\n", count);
}

void Valeurmax_unsignedshort()
{
    printf("unsigned short : min = 0 ; max = %hu\n", USHRT_MAX);
}

void Boucle_while(n)
{

    int i2 = 0;
    unsigned short int count2 = 0;
    while (i2 <= n && USHRT_MAX - count2 >= i2)
    {
        count2 = count2 + i2;
        i2 = i2 + 1;
    }
    printf("calcul avec boucle while : %hu et la somme s'arrete a n= %hu :\n", count2, i2 - 1);
}

void Boucle_do_while(unsigned short int n)
{
    int i3 = 0;
    unsigned short int count3 = 0;
    do {
        count3 = count3 + i3;
        i3 = i3 + 1;
    } while (i3 <= n);
    printf("calcul avec boucle do while : %hu\n", count3);
}



int main() {
    unsigned short int n = 0, n2 = 0;

    Boucle_for(n2);

    printf("Jusqu'a quel nombre voulez-vous faire la somme ? ");
    scanf_s("%hu", &n);

    Boucle_while(n);

    Boucle_do_while(n);

    Valeurmax_unsignedshort();

    system("pause");
    return(EXIT_SUCCESS);

}


