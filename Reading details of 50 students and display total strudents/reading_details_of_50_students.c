/* program to read following details of 50 students.
Student Name, Student Roll No, Class Display total
number of students studying in class "BCA". */

#include <stdio.h>

struct students {
    char stu_name[20];
    int stu_roll;
    char stu_class[10];
};

int main() {
    struct students stu[5];
    int i, count = 0;
    for(i = 0; i < 2; i++) {
        printf("Enter the name, roll_no. and class of student-%d: ", i+1);
        scanf("%s %d %s", stu[i].stu_name, &stu[i].stu_roll, stu[i].stu_class);
        if(stu[i].stu_class == " BCA") {
            count = count + 1;
        }
    }
    printf("BCA students are: %d", count);
    return 0;
}
