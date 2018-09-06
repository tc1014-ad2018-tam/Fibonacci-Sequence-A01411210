#include <stdio.h>
/*Este programa fue hecho para probar lo que se puede utilizar con la funcion for
 *
 * Mario Emilio Aguilar Chung
 *8-31-2018
 * A01411210@itesm.mx
 */
int main() {
    //Aqui se establece la variable que sera el numero de renglones de nuestra secuencia, asi como los dos primeros numeros de la secuencia
    int n;
    int t1;
    int t2;
    int next;

    //Aqui se establece el valor de los primeros dos terminos
    t1 = 0;
    t2 = 1;

    //Aqui se le pide al usuario que nos de el numero de renglones
    printf("Dime cuantos numeros de la Secuencia Fibonacci quieres ver:");
    scanf("%i", &n);

    //Aqui se empieza el loop
    for(int num = 1; num <= n; num++) {
        printf("%i\n", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }

    return 0;
}