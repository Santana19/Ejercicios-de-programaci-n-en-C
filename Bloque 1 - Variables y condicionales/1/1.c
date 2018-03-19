/*Pedir los coeficientes de una ecuación se 2º grado,
y muestre sus soluciones reales. Si no existen, debe indicarlo.*/

#include <stdio.h>
#include <math.h>

int main(){
    float ca,cb,cc; //se declaran los coeficientes a,b y c
    float comp; //esta variable se utilizará para comprobar si tiene soluciones reales la ecuación
    float x1,x2;//serán las soluciones reales, de tenerlas

    //se asigna valor a los coeficientes
    printf("Digite el valor del coeficiente a: ");
    scanf("%f",&ca);

    printf("Digite el valor del coeficiente b: ");
    scanf("%f",&cb);

    printf("Digite el valor del coeficiente c: ");
    scanf("%f",&cc);

    comp=pow(cb,2)-4*ca*cc;


    //se comprueba si la ecuación tiene soluciones reales

    if(comp<0){
        printf("No tiene soluciones reales");
    }else{
        //Se buscan las soluciones reales
        x1=((cb*(-1))-comp)/(2*ca);
        x2=((cb*(-1))+comp)/(2*ca);

        //Se imprime el conjunto solución

        printf("x1: %f\nx2: %f",x1,x2);
    }
    return 0;
}
