#include <stdio.h>

struct Student
{
    char name[15];
    float gpa;
};

int main()
{
    struct Student student1 = {"Oliver", 2.0};
    struct Student student2 = {"Pragganandha", 3.0};
    struct Student student3 = {"Patrick", 4.0};
    struct Student student4 = {"Ralph", 1.0};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.1f\n", students[i].gpa);
    }
    return 0;
}