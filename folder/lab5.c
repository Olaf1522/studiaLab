#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(){
    printf("Jesli chcesz wykonac dodawanie wpisz 1\n");
    printf("Jesli chcesz wykonac odejmowanie wpisz 2\n");
    printf("Jesli chcesz wykonac mnozenie wpisz 3\n");
    printf("Jesli chcesz wykonac dzielenie wpisz 4\n");
    printf("Jesli chcesz zakonczyc wpisz 5\n");
}

void plus(a,b,dod)
{
    dod=a+b;
    printf("%d + %d = %d\n",a,b,dod);
}
void minus(a,b,od)
{
    od=a-b;
    printf("%d - %d = %d\n",a,b,od);
}
void razy(a,b,mno)
{
    mno=a*b;
    printf("%d * %d = %d\n",a,b,mno);
}
void podzielic(a,b,dzi)
{
    dzi=a/b;
    printf("%d : %d = %d\n",a,b,dzi);
}

void id(int z, int x){
    printf("podaj 2 liczby\n");
    scanf("%d", &z);
    scanf("%d", &x);
    if(z==x){
        printf("1\n");
    }
    if(z!=x){
        printf("0\n");
    }
}
void pomidor()


int main()
{
   int a,b,k,z,x,i,j;
   int dod,od,mno,dzi;
   int a1,a2,a3,b1,b2,b3;
   char s[]="przykladowy tekst";
   char palindrom[10];
   printf("Podaj 2 liczby \n");
   scanf("%d", &a);
   scanf("%d", &b);
   menu();
   scanf("%d", &k);

   switch(k){
    case 1:{
        plus(a,b,dod);
        break;
    }
    case 2:{
        minus(a,b,od);
        break;
    }
    case 3:{
        razy(a,b,mno);
        break;
    }
    case 4:{
        podzielic(a,b,dzi);
        break;
    }
   }
   id(z,x);
    printf("Podaj liczbe znaku\n");
    scanf("%d",&i);
    printf("%c\n",s[i]);
    printf("Podaj slowo\n");
    scanf("%s",palindrom);
    if(palindrom[0]==palindrom[4] && palindrom[1]==palindrom[3]){
        printf("podane slowo jest palindromem");
    }else{
        printf("podane slowo nie jest pomidorem czy jakos tak...");
    }
    


    return 0;
}
