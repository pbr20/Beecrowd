#include<stdio.h>
#include<math.h>
int main(){
int x,y,z,m;

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);

m = (x+y+abs(x-y))/2;

printf("%d eh o maior\n",m);




    return 0;
}