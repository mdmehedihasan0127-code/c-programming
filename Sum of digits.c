#include<stdio.h>
int main(){
    int n,digits,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for( ;n>0;n/=10){
            digits=n%10;
            sum+=digits;
    }
    printf("Sum of digits=%d",sum);
}
