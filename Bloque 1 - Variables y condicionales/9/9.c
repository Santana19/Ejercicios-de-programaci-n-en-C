/*Pedir dos números y mostrarlos ordenados de mayor a menor.*/

#include<stdio.h>

int main(){
    int numero1, numero2;

    //Se piden los valores para numero1 y numero2
    printf("Digite el valor del #1: ");
    scanf("%d",&numero1);

    printf("Digite el valor del #2: ");
    scanf("%d",&numero2);

    //se verifica si numero1 es mayor que numero 2
    if(numero1 > numero2){
        printf("%d %d",numero1,numero2);
    }

    //se verifica si numero2 es mayor. Si son iguales se imprimará igual
    if(numero1 <= numero2){
        printf("%d %d",numero2,numero1);
    }
    return 0;
}
