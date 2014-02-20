#include <stdio.h>

int impar(int num){ //función de 3n+1
num= 3*num+1;
return num;
}

int par(int num){//funcion n/2
num=num/2;
return num;

}






int main(){
int n=2,resto; //variables de n = numero,resto, sirve para comprobar que función usar
printf("Dame un numero: ");
scanf("%i",&n);
printf("%i ",n);// imprimimos el primer resultado de la secuencia
while(n>1){// saldremos del bucle cuando n=1

resto = n%2;// vemos si nuestro numero ingresado es par o impar
        if(resto==0){
            n= par(n);// si es par, llamamos la función


        }else{
            n=impar(n);// si es impar, llamamos la funcion impar

            }
printf("%i ",n);// finalmente imprimimos los resultados
}


return 0;
}
