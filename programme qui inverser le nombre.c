#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;//n:le nombre qui souhaitez inverse. i:l'inverce

   do{
        printf("Veuillez entrer le nombre qui vous souhaitez inverser: ");
        scanf("%d",&n);

   }while(n<=0);

   i=0;

   for (int j=0;j<n;j++){

       i=(i*10)+(n%10);
        n=n/10;

   }

   printf("%d",i);

    return 0;
}
