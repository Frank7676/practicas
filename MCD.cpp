#include <stdio.h>


int MCD2(int m, int n){
int resto;

resto = m % n;
if(resto == 0){
    return n;// devolvemos n si el resultado es 0

}else{
    m=n;// asignamos al dividendo n
    n=resto;// asignamos a el divisor el valor de resto
    MCD2(m,n);// volvemos a llamar a la función!
    }
}


int MCD3(int m, int n, int p ){
    int x,y;
    x= MCD2(m,n);// llamamos a la funcion y guardamos el resultado en x
    y=MCD2(x,p);// volvemos a llamar  la función mandandole el resultado anterior y el tercer parametro


return y;
}




int main(){
int n,m,p,x;
printf("Dame el numero M: ");
scanf("%i",&m);
printf("Dame el numero N: ");
scanf("%i",&n);
printf("Dame el numero P: ");
scanf("%i",&p);

x=MCD3(m,n,p);// llamamos a la funcion y le mandamos los 3 parametros.

printf("El MCD es %i",x);

return 0;
}
