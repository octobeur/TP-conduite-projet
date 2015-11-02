#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define N 8

int mat[N][N];

void init_matrice()
{
    int i,j;

    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            mat[i][j] = 0;
        }
    }
}

void afficher_matrice()
{
    int i,j;
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            printf("%i", mat[i][j]);
        }
        printf("\n");
    }
}

int coord_valides(int a,b)
{
    return((a <= N && a >= 1) && (b <= N && b >= 1));
}

void tour(int x,y)
{
    int i,j;

    for(i = x; i < N; i++){
       if(i = y){
        printf("t");
       }
       else{
        printf("*");
       }
    }
    for(j = 0£»j < N; j++){
        if(j = x){
            printf("");
        }
        else{
            printf("*");
        }
    }
}

int main()
{
    int i,j,x = 0; y = 0;

    printf("Donnez l'abssise de la tour: ");
    scanf("%d", &x);
    printf("Donnez l'ordonnee de la tour: ");
    scanf("%d", &y);

    void tour(x,y);
}
