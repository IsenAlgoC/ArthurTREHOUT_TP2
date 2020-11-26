#include <stdlib.h>
#include <stdio.h>

#include <math.h>


int main() {

    srand(time(NULL));
    int aléatoire = rand() % 100 + 1;
    int stop = 0;
    int guess = 0;
    int supp = 0;
    while (stop == 0)
    {
        printf("Choisir un nombre : ");
        scanf_s("%d", &guess);
        if (guess > aléatoire)
        {
            printf("Nombre trop grand\n");
            supp = supp + 1;
        }
        else if (guess < aléatoire)
        {
            printf("Nombre trop petit\n");
            supp = supp + 1;
        }
        else
        {
            supp = supp + 1;
            printf("Bien joue champion`, t'as trouve en %d coup(s)\n", supp);
            stop = 1;
        }
    }

    system("pause");
    return(EXIT_SUCCESS);
}
