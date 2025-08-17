#include <stdio.h>

int main() {
    int number, i;
    
    printf("Enter a number:");
    scanf("%d", &number);
    
    for (i = 1; i <= 10; i=i+1) {
        printf("%d × %d = %d\n", number, i, number * i);
    }
    
    return 0;
}