#include <stdio.h>
#include <conio.h>

int main() {
    char str[] = "This is the world of danger.";
    int from_pos, to_pos, i;
    printf("Enter the position from where you want substring: ");
    scanf("%d", &from_pos);
    printf("Enter the position till you want substring: ");
    scanf("%d", &to_pos);
    for(i = from_pos-1; i < to_pos; i++) {
        printf("%c", str[i]);
    }
    return 0;
}
