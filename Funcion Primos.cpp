#include <stdio.h>

int primo(int num){
bool prim;//variable que devolveremos
int ceros=0,cont=1,resto;// variable que almacena ceros y el contador y la que almacena los restos

            do{
                resto=num%cont;
                 if(resto==0){
                    ceros=ceros++;//bucle para determinar si es primo.
                        }
                cont=cont++;

            }while(cont<=num);
            //printf("%i\n",ceros);
            if(ceros==2){
             prim= 1;}//comprobando si es primo asignamos un 1 al boleano

return prim;
}


int main(){

int numero;
printf("Dame un numero: ");
scanf("%i",&numero);
printf("%d",primo(numero));
return 0;
}
