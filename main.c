#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i,j;
   int n=20;
   int a,b;
   int c;
   int d;
   int e;
   double wynik;
   double suma;
   int arr[5]={1,2,3,4,5};
   char x[6][8];
   for (i=0;i<n;i++){
    wynik= pow(i,2);
    printf("%f \n" ,wynik);
   }
   printf("Podaj 2 liczby: \n");
   scanf("%d", &a);
   scanf("%d", &b);
   for(i=0;i<=b;i++){
    c=pow(a,i);
    printf("%d \n",c);
   }
   for(i=0;i<5;i++){
   c=pow(arr[i],2);
   printf("%d = %d \n", i+1 , c);
   }
   printf("podaj liczbe: \n");
   scanf("%d", &d);
   int tab[d];
   for(i=0;i<=d;i++){
   tab[i]= i;
   printf("tab[%i]=%d \n",i,tab[i]);
   }




    return 0;
}
