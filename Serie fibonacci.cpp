#include <stdio.h>
int a=0;
int b=0;
int fibo;
int cont=0;
int num;

int main(){


printf("Dame un numero: ");
scanf("%i",&num);

do{
    a=fibo;
    b=b+a;
    fibo=fibo+b;
    b=b++;
    cont=cont++;


}while(cont==num);
printf("La serie de fibonacci de %i es %i",num,fibo);


return 0;

}
