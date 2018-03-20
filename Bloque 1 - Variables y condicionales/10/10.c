/*Pedir tres números y mostrarlos ordenados de mayor a menor*/
#include <stdio.h>

int main (){
    int numero1, numero2,numero3;

    //Se piden los valores para numero1 y numero2
    printf("Digite el valor del #1: ");
    scanf("%d",&numero1);

    printf("Digite el valor del #2: ");
    scanf("%d",&numero2);

    printf("Digite el valor del #3: ");
    scanf("%d",&numero3);

    //se verifica el orden de mayor a menor de los 3 numeros
    if(numero1 >= numero2 && numero1 >= numero2){
        if(numero2>numero3){
            printf("%d %d %d", numero1,numero2,numero3);
        }else{
            printf("%d %d %d", numero1,numero3,numero2);
        }
    }else{
        if(numero2 >= numero1 && numero2 >= numero3){
            if(numero1>numero3){
                printf("%d %d %d", numero2,numero1,numero3);
            }else{
                printf("%d %d %d", numero2,numero3,numero1);
            }
        }else{
            if(numero1>numero2){
                printf("%d %d %d", numero3,numero1,numero2);
            }else{
                printf("%d %d %d", numero3,numero2,numero1);
            }
        }
    }

    return 0;
}
