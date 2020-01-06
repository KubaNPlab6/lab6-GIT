#include <stdio.h>
#include "add.h"
#include "subtraction.h"
#include "dzielenie.c"
#include "mnozenoe.c"

int main() 
{
    float num1, num2;
    char operator;
    
    printf("enter 1st number\n");
    scanf("%d",&num1);
    printf("enter 2nd number\n");
    scanf("%d",&num2);
    
    printf("enter operator\n");
    scanf(" %c",&operator);

    switch (operator) 
    {
        case '+':
            printf("%d+%d=%d\n",num1,num2,dodawanie(num1,num2));
            break;
        case '-':
            printf("%d-%d=%d\n",num1,num2,odejmowanie(num1,num2));
            break;
        case '*':
           mnozenie(num1,num2);
            break;
        case '/':
            dzielenie(num1,num2)
            break;
        default:            //dla przypadku w ktorym zadny z powyższych przykladów nie pasuje
            printf("Error operator nie jest prawidłowy");
            break;
            return 0;
     }      
}
