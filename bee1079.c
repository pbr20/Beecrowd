#include<stdio.h>

int main(){

int N;

scanf("%d",&N);

float m[N][3];
float a[N];

for(int i=0; i<N; i++){
    
        scanf("%f%f%f",&m[i][0],&m[i][1],&m[i][2]);
    
    a[i] = ((m[i][0]*2) + (m[i][1]*3) + (m[i][2]*5))/(2+3+5);
}

for(int i=0; i<N; i++){
    printf("%.1f\n",a[i]);
}

    return 0;
}