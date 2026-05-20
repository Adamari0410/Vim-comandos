#include <stdio.h>

int main() {
    int opcion;
    int numeros[5] = {4, 8, 15, 16, 23};
    int suma = 0;

    printf("=== MENU PRINCIPAL ===\n");
    printf("1. Mostrar numeros\n");
    printf("2. Sumar numeros\n");
    printf("3. Buscar numero mayor\n");
    printf("4. Salir\n");

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    if(opcion == 1) {

        printf("\nLista de numeros:\n");

        for(int i = 0; i < 5; i++) {
            printf("%d\n", numeros[i]);
        }

    } else if(opcion == 2) {

        for(int i = 0; i < 5; i++) {
            suma += numeros[i];
        }

        printf("La suma es: %d\n", suma);

    } else if(opcion == 3) {

        int mayor = numeros[0];

        for(int i = 1; i < 5; i++) {

            if(numeros[i] > mayor) {
                mayor = numeros[i];
            }

        }

        printf("El numero mayor es: %d\n", mayor);

    } else if(opcion == 4) {

        printf("Saliendo del programa...\n");

    } else {

        printf("Opcion invalida\n");

    }

    return 0;
}
