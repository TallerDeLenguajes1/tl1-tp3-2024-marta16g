#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *V, *N;
    V = (char *) malloc(5 * sizeof(char));

    for (int i=0; i<5; i++){
        printf("Nombre %d:", i+1);
        gets(V);
        N= (char *) malloc ((strlen(V)+1) * sizeof(char));
        strcpy(N, V);
        N++;
    }

    for (int i=0; i<5; i++){
        printf("Nombre %d: %s\n", i+1, N+i);
    }

    return 0;
}