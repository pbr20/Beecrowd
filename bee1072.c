#include<stdio.h>

int main(){

int N,co;
int ci = 0;
int X[10000];

scanf("%d",&N);

for(int i=0; i<N; i++){
    scanf("%d",&X[i]);
    if(X[i]>=10 && X[i]<=20){
        ci++;
    }
}

co = N - ci;

printf("%d in\n",ci);
printf("%d out\n",co);


    return 0;
}