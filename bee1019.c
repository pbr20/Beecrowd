#include<stdio.h>
int main(){
int N,x,y,z;

scanf("%d",&N);

x = N/3600;
N = N - (3600*x);

y = N/60;
z = N - (60*y);

printf("%d:%d:%d\n",x,y,z);





    return 0;
}