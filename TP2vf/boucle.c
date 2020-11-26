#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n = 3;
	unsigned short somme; 

	somme = 0;
	for (int i = 1; i <= n; i++)
	{
		somme += i;
	}
	printf("FOR- Somme des %d premiers entiers : %d\n", n, somme);

	somme = 0;
	int p = 1;
	while (p <= n)
	{
		somme += p;
		p += 1;
	}
	printf("WHILE- Somme des %d premiers entiers : %d\n", n, somme);

	somme = 0;
	p = 1;
	do {
		somme += p;
		p += 1;
	} while (p <= n);
	printf("DO...WHILE- Somme des %d premiers entiers : %d\n", n, somme);


	/******* VALEUR MAXIMALE DE N SANS DEPASSEMENT DE SOMME ******
	* Il faut resoude n(n+1)/2 <= 65 535
	* On trouve Nmax = 361 */

	const int N = 362;
	somme = 0;
	p = 1;
	while (p <= N)
	{
		somme += p;
		p += 1;
		if (65535 - somme < p) {
			printf("depassement\n");
			break;
		}
	}
	printf("WHILE MAX- Somme des %d premiers entiers : %d\n", N, somme);


	somme = 0;
	scanf_s("%d", &n);
	while (n > 361 || n < 1)
	{
		printf("Veuillez entrer une valeur positive et inferieur ou egale a 361\n");
		scanf_s("%d", &n);
	}
	for (int i = 1; i <= n; i++)
	{
		somme += i;
	}
	printf("FOR (n demande) - Somme des %d premiers entiers : %d\n", n, somme);
}