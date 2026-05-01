#include <stdio.h>
#include <math.h>

// funcion suma
int suma(int a, int b) {
    return a + b;
}

int main() {

    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    // operaciones basicas
    printf("\nSuma: %d\n", suma(a, b));
    printf("Resta: %d\n", a - b);
    printf("Multiplicacion: %d\n", a * b);

    if (b != 0) {
        printf("Division: %.2f\n", (float)a / b);
        printf("Cociente (entero): %d\n", a / b);
    } else {
        printf("No se puede dividir por 0\n");
    }

    // potencia
    printf("Potencia: %.2f\n", pow(a, b));

    // comparacion
    if (a > b) {
        printf("El primero es mayor\n");
    } else if (a < b) {
        printf("El primero es menor\n");
    } else {
        printf("Son iguales\n");
    }

    // imprimir numeros entre a y b
    printf("Numeros entre ellos:\n");

    if (a <= b) {
        for (int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        for (int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}