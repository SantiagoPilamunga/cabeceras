#include <stdio.h>
#include "archivo1.h"
int main()
{
    int a=0, b=0;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    printf("El resultado de la suma es: %d", suma(a,b));

    return 0;
}
