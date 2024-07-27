#include<stdio.h>
int main(){
char a;
double b,x,t;

scanf("%s",&a);
scanf("%lf",&b);
scanf("%lf",&x);

t = b + (x*0.15);

printf("TOTAL = R$ %.2lf\n",t);




    return 0;
}