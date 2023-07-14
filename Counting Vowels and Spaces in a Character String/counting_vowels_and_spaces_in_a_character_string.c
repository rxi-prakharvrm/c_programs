// program to count vowels and spaces in a character string

#include <stdio.h>
#include <string.h>

void count_vowels(char str[]) {
    int i, vowel = 0, space = 0;
    for(i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++;
            continue;
        }
        if(str[i] == ' ') {
            space++;
        }
    }
    printf("Vowels(In entered string) are: %d\n", vowel);
    printf("Spaces(In entered string) are: %d", space);
}

int main() {
    char str[50];
    printf("Enter a character array(string): ");
    gets(str);
    count_vowels(str);
    return 0;
}
