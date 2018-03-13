#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
// compile like:  gcc -Wall -O2 -DNROWS=10000 matrix1.c -o matrix1


#define NCOLS 100
#define NROWS 100


void get_walltime(double *wct) {
    struct timeval tp; //domh tou system
    gettimeofday(&tp, NULL);
    *wct = (double) (tp.tv_sec + (tp.tv_usec / 1000000.0));
}

int main() {
    double i, j, M, N;
    double ts, te, *table;

	
	 table = (double *)malloc(NROWS*NCOLS*sizeof(double)); 
	if (table==NULL) {
		printf("alloc error!\n");
		exit(1);
	}
	
	M=100;
	N=100;
    get_walltime(&ts);
	for (j = 1; j < N - 1; j++) {//einai oi sthles ?
		for (i = 1; i < M - 1; i++) {//einai oi grammes ?
			*table=5;
        }
    }
    get_walltime(&te);

    printf("Done on %lf seconds\n", (te - ts)); //emfanish tou xronou pou xriasthke gia na treksei to programma
	free(table);   
	return 0;
}
