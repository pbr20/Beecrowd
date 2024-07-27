#include<stdio.h>
int main(){
int N,x,y,z;

scanf("%d",&N);

x = N / 365;
N = N - (365*x);

y = N / 30;
z = N - (30*y);

printf("%d ano(s)\n",x);
printf("%d mes(es)\n",y);
printf("%d dia(s)\n",z);




    return 0;
}