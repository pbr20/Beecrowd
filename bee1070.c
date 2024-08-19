#include<stdio.h>

int main(){

int X;
int count = 0;

scanf("%d",&X);

for(int i=X; i<(X+12); i++){
    if(i % 2 != 0){
        count ++;
        printf("%d\n",i);
        if(count == 6){
            break;
        }
        
    }
}




    return 0;
}