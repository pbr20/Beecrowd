#include<stdio.h>

int main(){

float a;
double b,x;

scanf("%f",&a);

if(a>=0 && a<=400.00){
    b= a + (a*0.15);
    x=b-a;
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",x);
    printf("Em percentual: 15 %%\n");
}

if(a>=400.01 && a<=800.00){
    b= a + (a*0.12);
    x=b-a;
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",x);
    printf("Em percentual: 12 %%\n");
}

if(a>=800.01 && a<=1200.00){
    b= a + (a*0.10);
    x=b-a;
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",x);
    printf("Em percentual: 10 %%\n");
}

if(a>=1200.01 && a<=2000.00){
    b= a + (a*0.07);
    x=b-a;
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",x);
    printf("Em percentual: 7 %%\n");
}

if(a>2000.00){
    b= a + (a*0.04);
    x=b-a;
    printf("Novo salario: %.2lf\n",b);
    printf("Reajuste ganho: %.2lf\n",x);
    printf("Em percentual: 4 %%\n");
}



    return 0;
}