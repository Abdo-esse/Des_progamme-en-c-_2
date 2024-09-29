#include <stdio.h>
#include <stdlib.h>

int main()
{
  int  t[1000];
  int taill,v,i,pos;

  do{
    printf("Veuillez entrer la taille du tableau:");
    scanf("%d",&taill);
  }while(taill<=0);

  printf("Veuillez entrer les elements du tableau: \n");

  for (i=0;i<taill;i++){
    printf("t[%d]: ",i);
    scanf("%d",&t[i]);

  }

  printf("Veuillez entrer la valeur les elements qui vous souhaitez insere :");
  scanf("%d",&v);

  do{

    printf("Veuillez entrer la position de les elements qui vous souhaitez insere:");
    scanf("%d",&pos);

  }while(pos<=0||pos>taill+1);

  for( i=taill;i<pos;i--){
    t[i]=t[i-1];
  }
    t[pos-1]=v;

printf("Les elements apres l insere est:\n",v);
for ( i=0;i<taill;i++){
    printf("%d \t",t[i]);


    }





    return 0;
}
