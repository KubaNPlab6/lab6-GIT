#include <stdio.h>
#include "add.h"
#include "subtraction.h"
#include "mnozenie.c"
#include "dzielenie.c"


int main() 
{
    char operator;

    
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
            printf("%d*%d=%d\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d/%d=%d\n",num1,num2,num1/num2);
            break;
        default:            //dla przypadku w ktorym zadny z powyższych przykladów nie pasuje
            printf("Error operator nie jest prawidłowy");
            break;
            return 0;
     }      
}
