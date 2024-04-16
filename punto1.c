#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sacarPromedio(int matriz[5][12]);

int main ()
{

srand(time(NULL));
    int matriz[5][12];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            matriz[i][j] = rand () % (50000-10000+1) + 10000;
        }
        
    }
    puts("Matriz");
     for (int k = 0; k < 5; k++)
    {
        for (int l = 0; l < 12; l++)
        {
           printf("%3d", matriz[k][l]);
           printf("\n");
        }
        printf("\n");
    }

    sacarPromedio(matriz);
    
    return 0;
}

void sacarPromedio(int matriz[5][12])
{
    int total = 0;
    float promedio;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            total += matriz[i][j];
        }
        promedio = total/12;
        printf("El promedio del anio %d es $%.2f \n", i+1, promedio);
        total = 0;
        
    }
    
}