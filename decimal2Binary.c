// 1er paso dividir el valor entre 2 y almacenar el resto, mod, en un array
// 2do paso dividir otra vez entre 2 y almacenar el restante
// repetur hasta qye nuestri numero ya no s epueda dividir


#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12], n, i;


int main()
{

    system("cls");
    system("color 9f");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);
    printf("Usted va a convertir el numero %d a binario\n",n);

    for (i = 0; n > 0; i++)
    {
        binaryNumber[i] = n % 2;
        n /= 2; 
    }

    printf("El resultado de la conversion es: ");

    for( i -= 1; i >= 0; i-- )
    {
        printf("%d", binaryNumber[i]);
    }
}