#include <stdio.h>

int cont=1;
int num,resto;
int resul=0;

int main(){
printf("Dame un numero: ");
scanf("%i",&num);

do{
    resto=num%cont;
    if(resto==0){
        resul=resul+cont;
    }
    cont=cont++;
}while(cont<num);

if(resul==num){
    printf("El numero %i es perfecto",num);
} else{printf("El numero %i no es perfecto",num);}

return 0;
}
