// program to find the frequency of characters in a string

#include <stdio.h>
#include <string.h>
int main() {
    char str[100], character;
    int i, count = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find frequency: ");
    scanf("%c", &character);
    for(i = 0; i < strlen(str); i++) {
        if(str[i] == character) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
