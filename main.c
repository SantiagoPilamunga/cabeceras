#include <stdio.h>
#include "archivo1.h"
#include "archivo2.h"
#include "archivo3.h"
#include "archivo4.h"
int main()
{
    int a=0, b=0;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    printf("\n El resultado de la suma es: %d \n", suma(a,b));
    printf("\n El resultado de la resta es: %d \n", resta(a,b));
    printf("\n El resultado de la multiplicacion es: %d \n", multiplicacion(a,b));
    printf("\n El resultado de la division es: %d \n", division(a,b));

    return 0;
}
