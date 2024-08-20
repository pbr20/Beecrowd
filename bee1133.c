#include<stdio.h>

int main(){

int x,y;



scanf("%d",&x);
scanf("%d",&y);
if(y>x){

         for(int i=x; i<y; i++){
      
        if(i%5 ==0){
     
        if((i+2)<y && (i+2) != 2){
            printf("%d\n",(i+2));
        }

        if((i+3)<y){
           printf("%d\n",(i+3));
        }
     }
    }
}

else if(x>y){
 for(int i=y; i<x; i++){
      
        if(i%5 ==0){
     
        if((i+2)<x && (i+2) != 2){
            printf("%d\n",(i+2));
        }

        if((i+3)<x){
           printf("%d\n",(i+3));
        }
     }
    }
}

    return 0;
}