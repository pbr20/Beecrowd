#include<stdio.h>

int main(){

int X,Y;
int a = 0;

scanf("%d",&X);
scanf("%d",&Y);

if(X<Y){
for(int i=(X+1); i<Y; i++){
    if(i % 2 != 0){
        
        a = a + i;
    }
}

}

else{
    for(int i=(Y+1); i<X; i++){
    if(i % 2 != 0){
        
        a = a + i;
    }
}
}

printf("%d\n",a);

    return 0;
}