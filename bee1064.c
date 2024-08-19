#include<stdio.h>

int main(){

int count =0;
double n[6];
double a =0;

for(int i=0; i<6; i++){
    scanf("%lf",&n[i]);
}

for(int i=0; i<6; i++){
    if(n[i]>0){
        count ++;
        a = a + n[i];
    }
}

a = (a/count);

printf("%d valores positivos\n",count);
printf("%.1lf\n",a);




    return 0;
}