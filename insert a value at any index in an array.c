#include<stdio.h>
int main(){
    int arr[100];
    int n,i,pos,value;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
    printf("The elements are: ");
    for(i=0;i<n;i++){
            printf(" %d",arr[i]);
    }
    printf("\nEnter the position of index:\n");
    scanf("%d",&pos);
    printf("Enter the value to insert:");
    scanf("%d",&value);
    for(i=n;i>pos;i--){
            arr[i]=arr[i-1];
    }
            arr[pos]=value;
            n++;
            printf("Array after insertion: ");
            for(i=0;i<n;i++){
                    printf("%d ",arr[i]);
            }
            return 0;
}

