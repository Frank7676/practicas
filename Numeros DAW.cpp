#include <stdio.h>



int primo(int num){//15
int ceros=0,cont=1,resto;

         if(num==1){
            return num;
         }else{
              do{
                resto=num%cont;//15/1
                 if(resto==0){
                    ceros++;//1
                        }
                cont++;//2

            }while(cont<=num);
            if(ceros==2){
                return num;
            }else{
                return 0;}
         }
}

int numerosDaw(int valor){//4
int x,cont=1,resto,total=1;
            while(cont<valor){//1<4--2<4
            resto= valor % cont;
            if(resto==0){
                x=primo(cont);
                total=total*x;
            }
            cont++;// 2
            }
            if(total!=0){
                return valor;
            }else{

                return total;
                }
}


int main(){
int numero,x =0,y=1,cnt=1;//5
printf("Dame un numero: ");
scanf("%i",&numero);//5

    x= numerosDaw(numero);
    if(x!=0){
        printf("El numero %i es un numero DAW y los numeros Daw anteriores a el son: \n",x);
        do{
                y= numerosDaw(cnt);
                if(y!=0){
            printf("%i ",y);

            }
            cnt++;
        }while(cnt<numero);
    }



return 0;
}
