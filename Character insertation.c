#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int pos, len, i;

    printf("Enter string: ");
    gets(str);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter character: ");
    scanf(" %c", &ch);

    len = strlen(str);

    for(i = len; i >= pos; i--){
        str[i + 1] = str[i];
    }

    str[pos] = ch;


    printf("Updated String: %s", str);

    return 0;
}
