#include<stdio.h>
#include<math.h>
int main(){
int x,y,z,mAB,mABC;

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);

mAB = (x+y+abs(x-y))/2;

mABC = (mAB+z+abs(mAB-z))/2;

printf("%d eh o maior\n",mABC);




    return 0;
}