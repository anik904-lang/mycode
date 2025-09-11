#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    double d=a*b;
    double l=d/12.0;
    printf("%.3lf",l);
    return 0;
}