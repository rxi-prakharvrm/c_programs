// program to read whole string using scanf

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], i;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("%s", str);
    return 0;
}
