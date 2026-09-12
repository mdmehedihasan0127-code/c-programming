#include<stdio.h>
int main(){
    int x,y,i,z=0;
    printf("Enter smallest number:");
    scanf("%d",&x);
    printf("Enter largest number:");
    scanf("%d",&y);
    for(i=x;x<=y;i++){
        z=z+i;
    }

    printf("Sum is %d",z);
}

