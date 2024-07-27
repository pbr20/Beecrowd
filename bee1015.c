#include<stdio.h>
#include<math.h>
int main(){
double x1,x2,y1,y2,t;

scanf("%lf",&x1);
scanf("%lf",&y1);
scanf("%lf",&x2);
scanf("%lf",&y2);

t = sqrt(pow((x2-x1),2) + pow((y2-y1),2));

printf("%.4lf\n",t);



    return 0;
}