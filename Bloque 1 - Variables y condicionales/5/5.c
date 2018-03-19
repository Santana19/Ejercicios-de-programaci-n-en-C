/*Pedir un número e indicar si es positivo o negativo.*/
#include<stdio.h>

int main(){
    float numero;//como no se especifíca que tipo de número es, se declara flotante


    //Se piden los valores para numero
    printf("Digite el valor del numero: ");
    scanf("%f",&numero);


    //se verifican si es positivo o negatico
    if(numero>0){
        printf("Es positivo");
    }else{
        if(numero==0){
            printf("Es neutro");
        }else{
            printf("Es negativo");
        }
    }

    return 0;
}
