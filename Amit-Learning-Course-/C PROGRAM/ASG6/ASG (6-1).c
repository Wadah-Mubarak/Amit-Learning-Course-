/*Create a data base for 5 students in a school using array of structs, each struct contain 4 members :
 * Student name
 * Student age
 * Student degree
 * Student section
Fill the data inside main function and print it.
*/

#include <stdio.h>

struct Student
{
    char name[30];
    int age;
    int degree;
    int section;
};

void print(struct Student (*ptr)[5]);

int main()
{
    struct Student students[5] =
    {
        {"Ahmed", 15, 88, 2},
        {"Mohamed", 16, 90, 1},
        {"Ali", 15, 75, 3},
        {"Omar", 17, 85, 2},
        {"Khaled", 16, 92, 1}
    };

    print(&students);

    return 0;
}

void print(struct Student (*ptr)[5])
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d\n\n", i + 1);

        printf("Name    : %s\n", (*ptr)[i].name);
        printf("Age     : %d\n", (*ptr)[i].age);
        printf("Degree  : %d\n", (*ptr)[i].degree);
        printf("Section : %d\n", (*ptr)[i].section);
    }
}
