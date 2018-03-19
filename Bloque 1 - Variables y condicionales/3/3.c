/*Pedir el radio de una circunferencia y calcular su longitud. L=2PIr.*/

#include <stdio.h>

int main(){
    float radio,longitud; //se declara el radio y la longitud
    const float PI=3.14159265358979323846;//se define el valor del pi como constante

    do{
        //se pide el valor del radio
        printf("Digite el valor del radio: ");
        scanf("%f",&radio);

        //se verifica que el radio sea mayor a cero
        if(radio<=0){
            printf("Debe digitar un radio mayor a cero.\n");
        }
    }while(radio<=0);


    //se calcula la longitud
    longitud=2*PI*radio;

    //se imprime el área
    printf("La longitud de la circunferencia es: %.2f", longitud);

    return 0;
}

