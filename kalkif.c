#include <stdio.h>

int main() {
	
int znak, i;
float a, b, c;
do {
printf("Podaj a: ");
scanf("%f", &a);
printf("Podaj b: ");
scanf("%f", &b);
printf("Wybierz znak:\n- = 1\n+ = 2\n/ = 3\n* = 4 \n:");
scanf("%d", &znak);
if(znak==1)
{
	c = a - b;
	printf("Wynik dodawania %.2f - %.2f = %.2f", a , b , c);
}
if(znak==2)
{
	c = a + b;
	printf("Wynik dodawania %.2f + %.2f = %.2f", a , b , c);
}
if(znak==3)
{
	c = a / b;
	printf("Wynik dodawania %.2f / %.2f = %.2f", a , b , c);
}
if(znak==4)
{
	c = a * b;
	printf("Wynik dodawania %.2f * %.2f = %.2f", a , b , c);
}
printf("\n\nKONIEC?\n1=Tak/0=Nie: ");
scanf("%d", &i);
}

while(i==0);
return(0);
}
