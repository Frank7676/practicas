#include <stdio.h>

#define N 10
#define L 1
#define R -1




//struct Disparo disp[20] = { {36,R},{33,L},{3,L},{29,R},{10,L},{30,L},{10,R},{49,R},{37,R},{15,L},{21,L},{46,R},{17,L},{33,L},{34,R},{23,R},{12,R},{28,R},{42,L},{29,L} };


typedef struct disparo {
int pos;
char dir;
}dis;

dis disparar(){
    dis disparo1;
    printf("Ingresa la posicion de inicio: ");
    scanf("%i",&disparo1.pos);
    printf("Indicame la direccion L o R: ");
    scanf("%d",&disparo1.dir);



}

 mover(int pos, int dir){
int i,j;
int tabla[N][N];
            inicial(tabla);
            imprimir(tabla);
    for(i = pos ;i<N;++i){

            printf(" \n");
    }

}



 inicial(int tabla[N][N]){
		int i,j;
		int matriz[N][N]={
		    {0,0,0,0,0,0,0,0,0,0},
            {0,1,0,0,0,0,1,0,0,0},
            {0,0,1,0,0,0,1,0,0,0},
            {0,0,0,1,0,0,1,0,0,0},
            {0,1,0,0,0,0,0,0,0,1},
            {0,1,0,1,1,1,0,0,1,0},
            {0,1,0,0,0,0,0,1,0,0},
            {0,0,0,0,0,0,0,0,0,0},
            {0,0,1,1,0,1,1,0,0,0},
            {0,0,0,0,0,0,0,0,0,0}
            };
		for ( i = 0; i < N; ++i)
		{
			for (j= 0; j<N; ++j)
			{
				tabla[i][j]=matriz[i][j];
			}
		}
}


 imprimir(int tabla[N][N]){
	int i,j;
	for ( i=0;i<N;++i) {
			for ( j=0;j<N;j++) {
				if(tabla[i][j]==0){
				printf(".");
			}
				else{
					printf("X");
				}
			}
			printf(" \n");
			}
}

menu(){

	int caso;
	int tabla[N][N];
while(caso!=5){
        printf("1: Visualizar Pinball\n");
        printf("2: Ver caida de una pelota\n");
        printf("3: Ver Caida de 20 Pelotas\n");
        printf("4:  otro submenu\n");
        printf("Escoje una opcion: ");
        scanf("%i",&caso);

        switch(caso){
        case 1:

            inicial(tabla);
            imprimir(tabla);
            break;
        case 2:
            disparar();
        default:
            printf("Error!\n");
            break;
}
}

}


main(){

menu();

}
