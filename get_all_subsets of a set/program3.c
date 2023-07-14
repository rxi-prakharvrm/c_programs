#include <stdio.h>
void Square(int number)
{
    int square;
    square = number*number;
    printf("The square of %d is : %d", number, square);
}
int main()
{
    Square(5);
    return 0;
}
