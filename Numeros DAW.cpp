#include <stdio.h>



int primo(int num){//Funcion para comprobar si el numero es primo
int ceros=0,cont=1,resto;

         if(num==1){
            return num;//en caso del numero ser 1 devolveria el numero
         }else{
              do{
                resto=num%cont;
                 if(resto==0){
                    ceros++;
                        }
                cont++;

            }while(cont<=num);
            if(ceros==2){//comprueba si es primo
                return num;//devuelve el numero
            }else{
                return 0;}//en caso de no serlo nos devuelve un 0
         }
}

int numerosDaw(int valor){
int x,cont=1,resto,total=1;
            while(cont<valor){//Bucle que nos permite comprobar si es un numero DAW
            resto= valor % cont;// dividimos todas las veces por los numeros desde 1 hasta el mismo
            if(resto==0){
                x=primo(cont);// comprueba que su divisor es un numero primo
                total=total*x;//guardariamos en total todos los valores de los divisores
            }
            cont++;// aumentamos el contador
            }
            if(total!=0){// comprobamos el total,ya que si existia un divisor que no era primo
                        // al haberle devuelto un cero, total valdría cero.
                return valor;//
            }else{

                return total;// devolvemos total, que lo necesitaremos en la función main.
                }
}


int main(){
int numero,x =0,y=1,cnt=1;//5
printf("Dame un numero: ");// pedimos el numero a comprobar si es daw o no
scanf("%i",&numero);

    x= numerosDaw(numero);// guardamos en x el resultado de daw
    if(x!=0){// comprobamos mediante los returns para saber si es un numero DAw
        printf("El numero %i es un numero DAW y los numeros Daw anteriores a el son: \n",x);
        do{// bucle para imprimir los daw anteriores
                y= numerosDaw(cnt);//llamamos a la funcion mandandole el numero y
                if(y!=0){//comprobamos como antes e imprimimos solo los numeros DAW
            printf("%i ",y);

            }
            cnt++;
        }while(cnt<numero);//condicion de salida del bucle
    }



return 0;
}
