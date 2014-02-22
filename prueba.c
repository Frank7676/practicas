#include <stdio.h>

#define N 2

void inicial(int matriz[N][N]);
void imprimir(int matriz [N][N]);

main()
{
	int tabla[N][N];

	inicial(tabla);
	imprimir(tabla);
}

void inicial(int matriz [N][N]){
	int i,j;
	for ( i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			matriz[i][j] = i+j;
		}
	}
}

void imprimir(int matriz[N][N]){
	int i,j;
	for ( i=0;i<N;++i) {
			for ( j=0;j<N;j++) {
				printf("%d ",matriz[i][j]);
			}
			printf(" \n");
			}
}