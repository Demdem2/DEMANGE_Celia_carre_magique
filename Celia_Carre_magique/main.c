#include <stdio.h>
#include <stdlib.h>
#define TAILLE 5


int initier(int i, int j,int tabcarre[i][j]);
void placement(nb);
void avancer();


int main()
{
    int i=0;
    int j=0;
    int nb=1;
    int tabcarre[TAILLE][TAILLE];

    initier(i,j,tabcarre[i][j]);
    avancer(tabcarre);


    return 0;
}

int initier(int i, int j,int tabcarre[i][j]){
    i=0;
    j=0;
        for (i=0;i<TAILLE;i++){
            printf("\n");
            for(j=0; j<TAILLE;j++){
                tabcarre[i][j]=0;
                printf("%d",tabcarre[i][j]);
            }
        }
        tabcarre[2][2]=1;
        return tabcarre[i][j];
    }


void placement(tabcarre){

    if (tabcarre[i][j]==0) {
        nb=nb+1;
        tabcarre[i][j]=nb
    }

}


void avancer(tabcarre){

    for (i=0;i<TAILLE;i++){
        printf("\n");
        for(j=0; j<TAILLE;j++){
            if i==TAILLE-1{
                i=0;
                placement(tabcarre);
            }
            if j==TAILLE-1{
                j=0;
                placement(tabcarre);
            }
            placement(tabcarre);
        }
    }

}
