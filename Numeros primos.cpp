#include <stdio.h>

int num,resto;
int cont=0;
int div=1;
int main(){
printf("Dame un numero: ");
scanf("%i",&num);

do{
    resto=num%div;
    div=div++;
    if(resto==0){
        cont=cont++;
    }

}while(div<=num);
if(cont==2){
    printf("El numero %i es primo",num);

}else{printf("El numero %i no es primo",num);}

}
