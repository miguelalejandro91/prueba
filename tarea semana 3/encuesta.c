#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j, fact, sum = 0, cont, prom;
    
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    
    for (i = 1; i <= num; i++) {
        fact = 1;

        for (j = 1; j <= i; j++) {
            fact *= j;
        }
        
        
        // Sumamos el factorial a la variable de suma y contamos cuántos factoriales se han sumado
        sum += fact;
        cont++;
    }
    prom = round((float) sum / cont);
    
    printf("El promedio entero de los factoriales de los enteros entre 1 y %d es: %d\n", num, prom);
    
    return 0;
}
