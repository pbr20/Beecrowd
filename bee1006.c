#include<stdio.h>
int main(){
float A,B,X;
double MEDIA;

scanf("%f",&A);
scanf("%f",&B);
scanf("%f",&X);

MEDIA = ((A*2)+(B*3)+(X*5))/(2+3+5);

printf("MEDIA = %.1lf\n",MEDIA);



    return 0;
}