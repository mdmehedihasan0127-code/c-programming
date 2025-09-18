#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if((a%5==0) && (a%11==0))
        printf("Divisible by 5 and 11");
    else
        printf("Not divible by 5 and 11");
    return 0;
}

