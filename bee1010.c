#include<stdio.h>
int main(){
int a,b,x,y;
float m,n,t;

scanf("%d",&a);
scanf("%d",&b);
scanf("%f",&m);
scanf("%d",&x);
scanf("%d",&y);
scanf("%f",&n);

t = (b*m) + (y*n);

printf("VALOR A PAGAR: R$ %.2f\n",t);

    return 0;
}