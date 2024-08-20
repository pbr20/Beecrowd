#include<stdio.h>

int main(){

int N; int count =0;

scanf("%d",&N);

int X;

for(int i=0; i<N; i++){

    scanf("%d",&X);

    for(int i=2; i<X; i++){

    
         if(X % i == 0){
         printf("%d nao eh primo\n",X);
        count ++;
         break;
    }
    
    
}
if(count == 0){
    printf("%d eh primo\n",X);
  
}

  count =0;

}



    return 0;
}