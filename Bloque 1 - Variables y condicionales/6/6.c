/*Pedir dos n�meros y decir si uno es m�ltiplo del otro*/

#include <stdio.h>

int main (){

    int numero1, numero2;//Se declaran como entero ya que se utilizar� el m�dulo para verificar si son m�ltiplos

    //Se piden los valores para numero1 y numero2
    printf("Digite el valor del #1: ");
    scanf("%d",&numero1);

    printf("Digite el valor del #2: ");
    scanf("%d",&numero2);

    if(numero1 % numero2==0){
        printf("%d es multiplo de %d",numero1,numero2);
    }else{
        printf("%d no es multiplo de %d",numero1,numero2);
    }

return 0;
}
