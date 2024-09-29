#include <stdio.h>
#include <stdlib.h>

int main()
{
  float t[1000];

  float n,s,p,d,M4;


  printf("veuillez entrer le nombre des nombres qui vous souhaitez calculer: ");
  scanf("%f",&n);

  printf("veuillez entrer les nombres qui vous souhaitez calculer: \n");

  for (int i=0;i<n;i++){

    printf("nbr %d = ",i+1);
    scanf("%f",&t[i]);
 }

  s=0;
  p=1;

  for (int i=0;i<n;i++){

        s=s+t[i];
         p=p*t[i];

 }

  printf("%.2f \n",s);

  printf("%.2f\n",p);

  M=s/n;

  printf("%.2f\n",M);









    return 0;
}
