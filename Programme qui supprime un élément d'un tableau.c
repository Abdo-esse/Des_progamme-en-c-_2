#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100000];
    int i,taill,pos;

    do{
            printf("veuillez entrer la taille du tableau :");
            scanf("%d",&taill);
    }while(taill<=0);

    printf("veuillez entrer les elements du tableau : \n");

    for(i=0;i<taill;i++){

        printf("t[%d]=",i+1);
        scanf("%d",&t[i]);

    }

    printf("Veuillez entrer la position de l'elelmentt a supprimer:");
    scanf("%d",&pos);

    while(pos<=0||pos>taill){
        printf("Position invalide ! veuillez entrer une position entre 1et %d : ",taill);
        scanf("%d",&pos);

    }

        for (i=pos; i<=taill-1 ;i++){

            t[i-1]=t[i];

        }
        taill--;

        printf("Elemente de tableau apres la suppression sont:");

        for(i=0;i<taill;i++)
            printf("%d\t",t[i]);


    return 0;
}
