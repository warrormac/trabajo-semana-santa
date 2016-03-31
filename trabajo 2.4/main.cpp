#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,c,d,i,m,mcd;
    printf("Programa que calcula el Maximo Comun divisor de 4 números:\n");
    printf("Introduce el primer numero: ");
    scanf("%d",&a);
    printf("Introduce el segundo numero: ");
    scanf("%d",&b);
    printf("Introduce el tercer numero: ");
    scanf("%d",&c);
    printf("Introduce el cuarto numero: ");
    scanf("%d",&d);
    if (a<b){
        if (a<c)
            if (a<d)
                m = a;
    }
    if (b<a){
        if (b<c)
            if (b<d)
                m = b;
    }
    if (c<a){
        if (c<b)
            if (c<d)
                m = c;
    }
    if (d<a){
        if (d<c)
            if (d<b)
                m = d;
    }
    for (i=1; i<=m;i++) {
        if (a%i==0 && b%i==0 && c%i==0 && d%i==0) {
            mcd=i;
            }
        }
    printf("El maximo comun divisor es: %8d" , mcd);
    printf("\n");
    printf("\n");
    printf("\n");

}
