#include<stdio.h>
int main(){
    float a,b,sum,average;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);
    sum=a+b;
    average=(a+b)/2;
    printf("average is %f",average);
    return 0;
}