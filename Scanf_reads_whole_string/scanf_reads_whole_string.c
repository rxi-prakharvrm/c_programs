/* program in which scanf function is reading whole string */
#include <stdio.h>

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("%s", str);
    return 0;
}
