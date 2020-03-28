#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Creamos un vector inicial del tamaño de un entero
    int *vector = malloc(sizeof (int));
    int i = 0, elemento, respuesta;

    while(1){
        // Metemos el elemento que diga el usuario en la posición del vector
        printf("Introduce el elemento %d: ",i+1);
        scanf("%d",&elemento);
        *(vector + i) = elemento;

        // Preguntamos al usuario si quiere introducir otro elemento y en caso afirmativo aumentamos el tamaño del vector en 1
        printf("Quieres introducir otro elemento? (1/0) ");
        scanf("%d",&respuesta);
        if (respuesta == 1){
           vector = (int *) realloc(vector, (i+2)*sizeof (int));
            i = i + 1;
        }
        else {
            break;
        }
    }

    // Imprimimos la longitud del vector y los elementos
    int longitud = sizeof(vector);
    printf("La longitud de tu vector es: %d\n", longitud);
    printf("Tu vector es: [ ");
    for (i=0; i<longitud; i++){
        printf("%d, ", *(vector + i));
    }
    printf("]\n");

    free(vector);

    return 0;
}
