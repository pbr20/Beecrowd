#include<stdio.h>
int main(){
double A,B,C,tri,cir,tra,qua,ret,pi=3.14159;

scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);

tri = 0.5 * A * C;
cir = pi * C * C;
tra = 0.5 * (A+B) * C;
qua = B * B;
ret = A * B;

printf("TRIANGULO: %.3lf\n",tri);
printf("CIRCULO: %.3lf\n",cir);
printf("TRAPEZIO: %.3lf\n",tra);
printf("QUADRADO: %.3lf\n",qua);
printf("RETANGULO: %.3lf\n",ret);

    return 0;
}