#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

float N;
int oneh,fif,twe,ten,fiv,two;
int one,zfif,ztwef,zten,zzfiv;
float zzone;

scanf("%f",&N);

oneh = abs(N / 100);
N = N - (oneh*100);

fif = abs(N / 50);
N = N - (fif*50);

twe = abs(N / 20);
N = N - (twe*20);

fiv = abs(N / 5);
N = N - (fiv*5);

two = abs(N / 2);
N = N - (two*2);

one = abs(N / 1);
N = N - (one*1);

zfif = N / 0.50;
N = fmod(N , 0.50);

ztwef = N / 0.25;
N = fmod(N , 0.25);

zten = N / 0.10;
N = fmod(N , 0.10);

zzfiv = N / 0.05;
N = fmod(N , 0.05);

zzone = N / 0.01;

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n",oneh);
printf("%d nota(s) de R$ 50.00\n",fif);
printf("%d nota(s) de R$ 20.00\n",twe);
printf("%d nota(s) de R$ 10.00\n",ten);
printf("%d nota(s) de R$ 5.00\n",fiv);
printf("%d nota(s) de R$ 2.00\n",two);

printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n",one);
printf("%d moeda(s) de R$ 0.50\n",zfif);
printf("%d moeda(s) de R$ 0.25\n",ztwef);
printf("%d moeda(s) de R$ 0.10\n",zten);
printf("%d moeda(s) de R$ 0.05\n",zzfiv);
printf("%.0f moeda(s) de R$ 0.01\n",zzone);


    return 0;
}