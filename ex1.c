#include<stdio.h>
#define N 8



void init_matrice(char mat[N][N])
{
    int i,j;

    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            mat[i][j] = '.';
        }
    }
}

void afficher_matrice(char mat[N][N])
{
    int i,j;
    for(i = 0; i < N; i++){
        for(j = 0; j< N; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}

int coord_valides( int l, int c)
{
    return((l <= N && l >= 1) && (c <= N && c >= 1));
}

void tour(char echq[N][N], int l, int c)
{
    int i;
    for(i = 0; i < N; i++){
      echq[l][i]='*';
      echq[i][c]='*';
    }
    echq[l][c]='t';
}

int main()
{
    int l,c;
    
    char echq[N][N];

    printf("Donnez ligne: ");
    scanf("%i", &l);
    printf("Donnez colonne: ");
    scanf("%i", &c);
    
    if(coord_valides(l,c)){
    	l--;
    	c--;
        init_matrice(echq);
        tour(echq,l,c);
        afficher_matrice(echq);
    }
}