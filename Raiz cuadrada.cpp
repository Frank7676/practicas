#include <stdio.h>

int main(){
int num,cont,divi=1;
double var=1;
double deci=1;//decimales
    printf("Programa para realizar raices cuadradas\n");

    printf("Dame el numero de precision de decimales: ");
    scanf("%i",&cont);// guardo la cantidad de decimales

    printf("Dame el numero: ");
    scanf("%i",&num);//indico el numero


            do{
                deci=deci/10;

                divi=divi++;// incremento de bucle hasta!


            }while(divi<=cont);//sale cuando el contador es igual al numero


            do{
                 var=var+deci;


            }while((var*var)<=num);


            printf("La raiz de %i %G ",num,var);


return 0;
}
