/* program to concatenate two strings (Do not use
inbuilt string function) */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Prakhar ", str2[20] = "Verma";
    char str_cat[40];
    int i;
    for(i = 0; i < strlen(str1); i++) {
        str_cat[i] = str1[i];
    }
    for(i = (strlen(str1)); i <= (strlen(str2) + strlen(str1)); i++) {
        str_cat[i] = str2[i-strlen(str1)];
    }
    printf("%s", str_cat);
    return 0;
}
