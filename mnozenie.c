#include <stdio.h>
#include <stdlib.h>

void mnozenie() {
 	int a, b, c;
	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("Podaj druga liczbe: ");
	scanf("%d", &b);
 	c=a*b;
 	printf("Wynik mnozenia %d * %d = %d", a, b, c);
 }
