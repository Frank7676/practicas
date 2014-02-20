#include <stdio.h>
int potencia(int base, int exponente);

int potencia(int base, int exponente){
    int total=1;
    int cont=0;
if(exponente==0){
    total==1;
}else if(exponente==1){
    total= base;
    } else{
         do{
        total= total*base;  //4=2*2
        cont=cont++;   //3=1+1
    }while(cont<exponente);


    }



return total;
}



int main(){
    int ba,expo,x;
 printf("Dame la base: ");
  scanf("%i",&ba);
 printf("Dame la exponente: ");
    scanf("%i",&expo);

        //2 formas:
        //forma 1
        printf("El resultado es %i\n",potencia(ba,expo));

        //forma2
        x = potencia(ba,expo);
        printf("El resultado es %i\n",x);


return 0;
}
