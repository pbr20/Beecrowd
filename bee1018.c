#include<stdio.h>
int main(){
int N,oneh,fif,twe,ten,fiv,two,one;

scanf("%d",&N);

printf("%d\n",N);

oneh = N/100;
N = N - (100*oneh);

fif = N/50;
N = N - (50*fif);

twe = N/20;
N = N - (20*twe);

ten = N/10;
N = N - (10*ten);

fiv = N/5;
N = N - (5*fiv);

two = N/2;
one = N - (2*two);


printf("%d nota(s) de R$ 100,00\n",oneh);
printf("%d nota(s) de R$ 50,00\n",fif);
printf("%d nota(s) de R$ 20,00\n",twe);
printf("%d nota(s) de R$ 10,00\n",ten);
printf("%d nota(s) de R$ 5,00\n",fiv);
printf("%d nota(s) de R$ 2,00\n",two);
printf("%d nota(s) de R$ 1,00\n",one);




    return 0;
}