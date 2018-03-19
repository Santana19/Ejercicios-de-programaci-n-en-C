/*Pedir el radio de un círculo y calcular su área. A=PI*r^2.*/

#include <stdio.h>
#include <math.h>

int main(){
    float radio,area; //se declara el radio y el área
    const float PI=3.14159265358979323846;//se define el valor del pi como constante

    do{
        //se pide el valor del radio
        printf("Digite el valor del radio: ");
        scanf("%f",&radio);

        //se verifica que el radio sea mayor a cero
        if(radio<=0){
            printf("Debe digitar un radio mayor a cero\n");
        }
    }while(radio<=0);


    //se calcula el área
    area=PI*pow(radio,2);

    //se imprime el área
    printf("El area es: %.2f", area);

    return 0;
}
