#include<stdio.h>
int main(){
    int n,i, temp,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        i=n%10;
        rev=rev*10+i;
        n/=10;

    }
    if(temp==rev)
        printf("%d is a Palindrome number",temp);
    else
        printf("%d is not a palindrome number",temp);
}












