#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,r,s,t;
    printf("Podaj dwie liczby: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d = %d\n",a,b,c);
    d = a - b;
    printf("%d - %d = %d\n",a,b,d);
    e = a * b;
    printf("%d * %d = %d\n",a,b,e);
    f = a / b;
    printf("%d / %d = %d\n",a,b,f);
    g = a % b;
    printf("reszta z dzielenia = %d\n",g);
    if (a<b)
    printf("wieksza jest druga liczba: %d\n",b);
    else{
    printf("wieksza jest pierwsza liczba: %d\n",a);
    }
    printf("podaj jeszcze jedna liczbe: \n");
    scanf("%d", &h);
    if (a<b){
    if (h<b){
    printf("wieksza jest druga liczba: %d\n",b);
    }
    else{
    printf("wieksza jest trzecia liczba: %d\n",h);
    }
    }
    else{
    printf("wieksza jest pierwsza liczba: %d\n",a);
    }
    char sign;
    printf("Podaj dowolny znak z klawiatury: \n");
    scanf(" %c", &sign);
    if (sign>=65 && sign<=90){
    printf("znak jest duza litera alfabetu \n");
    }
    else{
    if (sign>=97 && sign<=122){
    printf("znak jest mala litera alfabetu \n");
    }
    else{
    printf("znak nie jest litera alfabetu \n");
    }
    }
    printf("wprowadz rok: \n");
    scanf("%d", &i);
    if(i % 4 ==0){
    if(i%100!=0){
    printf("ten rok jest rokiem przestepnym \n");
    }
    else{
    printf("ten rok nie jest rokiem przestepnym \n");
    }
    }
    else{
    printf("ten rok nie jest rokiem przestepnym \n");
    }
    printf("podaj dodatkowo dzien \n");
    scanf("%d", &j);
    printf("i miesiac \n");
    scanf("%d", &k);
    if(k>0 && k<=12){
    if(k==2 || k==4 || k==6 || k==9 || k==11){
    if(j<31 && j>0){
    printf("to jest poprawna data \n");
    }
    else{
    printf("data nie jest poprawna \n");
    }
    }
    else{
    if(j<=31 && j>0){
    printf("to jest poprawna data \n");
    }
    else{
    printf("data nie jest poprawna \n");
    }
    }

    }
    else{
    printf("data nie jest poprawna \n");
    }
    printf("8 zrobie na koniec jak mi czasu starczy :) \n");
    printf("podaj wspolrzedne wierzcholka prostokata \n");
    scanf("%d", &l);
    scanf("%d", &m);
    printf("a teraz wspolrzedne przeciwleglego wierzcholka \n");
    scanf("%d", &n);
    scanf("%d", &o);
    if(l==n || m==o){
    printf("tak nie rob tak nie mozna \n");
    }
    else{
    if(l<0 || m<0 || n<0 ||o<0){
    printf("oszczedz mi roboty wpisz dodatnie cyfry \n");
    }
    else{
    if(l<n){
    p =n - l;
    if(m<o){
    r =o - m;
    s = p * r;
    t = p * 2 + r * 2;
    printf("pole = %d\n",s);
    printf("obwod = %d\n",t);
    }
    else{
    r =m - o;
    s = p * r;
    t = p * 2 + r * 2;
    printf("pole = %d\n",s);
    printf("obwod = %d\n",t);
    }
    }
    else{
    p = l - n;
    s = p * r;
    t = p * 2 + r * 2;
    printf("pole = %d\n",s);
    printf("obwod = %d\n",t);
    if(m<o){
    r =o - m;
    s = p * r;
    t = p * 2 + r * 2;
    printf("pole = %d\n",s);
    printf("obwod = %d\n",t);
    }
    else{
    r =m - o;
    s = p * r;
    t = p * 2 + r * 2;
    printf("pole = %d\n",s);
    printf("obwod = %d\n",t);
    }
    }
    }
    }









    return 0;
}
