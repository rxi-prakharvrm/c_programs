/* program to read user information from the file
 and display them onto the console */

#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("stu_info.txt", "r");
    char str[100];
    if(fp == NULL) {
        printf("This file is unable to open!");
        exit(0);
    }
    else {
        fgets(str, 100, fp);
        printf("%s", str);
        fclose(fp);
    }
    return 0;
}

