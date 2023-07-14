#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr1, *fptr2;
    char filename[100];
    char c;

    printf("Enter the name of the file you want to read: ");
    scanf("%s", filename);

    fptr1 = fopen(filename, "r");

    if(fptr1 == NULL) {
        printf("File is failed to open.");
        exit(0);
    }

    printf("Enter the name of the file in which you want to write something: ");
    scanf("%s", filename);

    fptr2 = fopen(filename, "w");

    if(fptr2 == NULL) {
        printf("File is failed to open.");
        exit(0);
    }

    c = fgetc(fptr1);
    while(c != EOF) {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}

