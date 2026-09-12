#include<stdio.h>
#include<math.h>
int main(){
    double a,b,result;
    printf("Enter base:");
    scanf("%lf",&a);
    printf("Enter exponent:");
    scanf("%lf",&b);
    result=pow(a,b);
    printf("Result is %.2lf",result);
}

