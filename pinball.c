#include <stdio.h>







main(){


int tabla[10][10] = {
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

int j,i;

for (j=0;j<10;j++) {
	for (i=0;i<10;i++) {
		printf("%d",tabla[i][j]);
	}
	printf("\n");
	}
}