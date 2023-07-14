/* program to count the vowels and spaces in character array/string */
#include <stdio.h>
#include <string.h>

void count_vowel_and_spaces(char ch_array[])
{
    int count_vowels = 0;
    int count_spaces = 0;
    for(int i=0;i<strlen(ch_array);i++) {
        if(ch_array[i] == 'a'|| ch_array[i] == 'e' || ch_array[i] == 'i' || ch_array[i] == 'o' || ch_array[i] == 'u' || ch_array[i] == 'A'|| ch_array[i] == 'E' || ch_array[i] == 'I' || ch_array[i] == 'O' || ch_array[i] == 'U'){
            count_vowels++;
        }
        else if(ch_array[i] == ' ') {
            count_spaces++;
        }
    }
    printf("\nNumber of Vowels in this character array are: %d\n", count_vowels);
    printf("\nNumber of Spaces in this character array are: %d\n", count_spaces);
}

int main()
{
    char ch_array[100];
    printf("Enter a string: ");
    gets(ch_array);
    count_vowel_and_spaces(ch_array);
    return 0;
}
