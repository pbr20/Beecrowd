#include<stdio.h>

int main(){

int n;

float pc,ps,pr;

scanf("%d",&n);

int t, total;
char ch;
int c=0; int r=0; int s=0;

for(int i=0; i<n; i++){
   
    scanf("%d %c",&t,&ch);

    if('C' == ch){
        c = c + t;
    }
    else if('S' == ch){
        s = s + t;
    }
    else if('R' == ch){
        r = r + t;
    }

}


    total = c + s + r;


pc = (c / (float) total)*100;
ps = (s / (float) total)*100;
pr = (r / (float) total)*100;


printf("Total: %d cobaias\n",total);
printf("Total de coelhos: %d\n",c);
printf("Total de ratos: %d\n",r);
printf("Total de sapos: %d\n",s);
printf("Percentual de coelhos: %.2f %%\n",pc);
printf("Percentual de ratos: %.2f %%\n",pr);
printf("Percentual de sapos: %.2f %%\n",ps);

    return 0;
}