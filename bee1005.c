#include<stdio.h>
int main(){
float A,B;
double MEDIA;

scanf("%f",&A);
scanf("%f",&B);

MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);

printf("MEDIA = %.5lf\n",MEDIA);



    return 0;
}