#include <stdio.h>
int es_primo(int n) {
int i;
for(i = 2; i < n; i++) {
if(n % i == 0) {
return 0;
        }
    }
return 1;
}
int main() {
int num, sum = 0, count = 0;
float promedio;
printf("Ingrese una serie de números. Ingrese 0 para terminar.\n");
do {
printf("Ingrese un número: ");
scanf("%d", &num);
if (es_primo(num)) {
 sum += num;
 count++;
        }
    } 
while (num != 0);
   
if (count > 0) {
promedio = (float)sum / count;
printf("El promedio entero de los números primos leídos es: %.0f\n", promedio);
} else {
printf("No se leyeron números primos.\n");
    }

    return 0;
}