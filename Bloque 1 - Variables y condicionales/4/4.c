/*Pedir dos números y decir si son iguales o no.*/
#include<stdio.h>

int main(){
    float numero1,numero2;//como no se especifíca que tipo de números son, se declaran flotantes

    //Se piden los valores para numero1 y numero2
    printf("Digite el valor del #1: ");
    scanf("%f",&numero1);

    printf("Digite el valor del #2: ");
    scanf("%f",&numero2);

    //se verifican si son iguales
    if(numero1==numero2){
        printf("Son iguales");
    }else{
        printf("No son iguales");
    }
    return 0;
}
